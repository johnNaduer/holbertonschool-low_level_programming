#include "main.h"

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
