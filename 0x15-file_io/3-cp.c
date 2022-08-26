#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file
 *
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file
 * @argc: The number of arguments
 * @argv: vector arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int bg, dst, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	bg = open(argv[1], O_RDONLY);
	r = read(bg, buf, 1024);
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (bg == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(dst, buf, r);
		if (dst == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write dst %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(bg, buf, 1024);
		dst = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(bg);
	close_file(dst);

	return (0);
}
