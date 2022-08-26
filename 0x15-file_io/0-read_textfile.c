#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file's name
 * @letters: letters to print
 *
 * Return: letters, 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int lt;
	ssize_t rlt, wlt;

	if (!filename)
		return (0);
	lt = open(filename, O_RDONLY);

	if (lt == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rlt = read(lt, buffer, letters);
	wlt = write(STDOUT_FILENO, buffer, rlt);
	close(lt);

	free(buffer);

	return (wlt);
}
