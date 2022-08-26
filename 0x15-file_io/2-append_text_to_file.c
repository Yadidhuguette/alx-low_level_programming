#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 if successful and -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, lt, nlt;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (lt = 0; text_content[lt]; lt++)
			;

		nlt = write(f, text_content, lt);

		if (nlt == -1)
			return (-1);
	}

	close(f);

	return (1);
}
