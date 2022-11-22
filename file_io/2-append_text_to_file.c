#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: input const char
 * @text_content: input char
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nlt;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nlt = 0; text_content[nlt]; nlt++)
			;

		rw = write(f, text_content, nlt);

		if (rw == -1)
			return (-1);
	}

	close(f);

	return (1);
}
