#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 *@text_content: string to write the file
 *
 * Return: 1 if successful and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, lt, nlt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlt = 0; text_content[nlt];)
			nlt++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	lt = write(f, text_content, nlt);

	if (f == -1 || lt == -1)
		return (-1);

	close(f);

	return (1);
}
