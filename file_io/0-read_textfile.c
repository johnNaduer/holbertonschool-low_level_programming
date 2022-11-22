#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: inout const char
 * @letters: input size_t
 *
 * Return: new
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t nrd, new;
	char *buf;

	if (!filename)
		return (0);

	fr = open(filename, O_RDONLY);

	if (fr == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fr, buf, letters);
	new = write(STDOUT_FILENO, buf, nrd);

	close(fr);

	free(buf);

	return (new);
}
