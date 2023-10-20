#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Delegate 1024 bytes for a buffer.
 * @file: That file buffer is keeping chars for
 * the function.
 *
 * Return: I a pointer to the newly-delegated buffer.
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
 * close_file - it ends the file descriptors.
 * @fd: That is the file descriptor to be closed.
 */
void close_file(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - duplicates the content of the file to another file.
 * @argc: That is the number of arguments.
 * @argv: That is the array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description:
 * In case the argument count is incorrect - exit code 97.
 * In case the file_from cannot be read - exit code 98.
 * In case the file_to cannot be written to - exit code 99.
 * In case file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, l, k;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	l = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		k = write(to, buffer, l);
		if (to == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		l = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (l > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
