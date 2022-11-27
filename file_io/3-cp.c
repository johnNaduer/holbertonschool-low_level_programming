#include "main.h"
void closer(int arg_files);
/**
 * main - Entry Point
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, f_from_r, w_err;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (f_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (f_from_r >= 1024)
	{
		f_from_r = read(f_from, buf, 1024);
		if (f_from_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			closer(f_from);
			closer(f_to);
			exit(98);
		}
		w_err = write(f_to, buf, f_from_r);
		if (w_err == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	closer(f_from);
	closer(f_to);
	return (0);
}

/**
 * closer - close with error
 * @arg_files: argv 1 or 2
 * Return: void
 */
void closer(int arg_files)
{
	int close_error;

	close_error = close(arg_files);

	if (close_error == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", arg_files);
		exit(100);
	}
}
