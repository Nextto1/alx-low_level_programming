#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- From the function, it reads
 * text file print to STDOUT.
 * @filename: it is the text file being read
 * from the function.
 * @letters: the number of letters to be read
 * from the function.
 * Return: w- from the function, is the  actual number
 * of bytes read and printed.
 *        0 when function fails or filename is NULL
 *        in the function.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *taf;
	ssize_t bk;
	ssize_t w;
	ssize_t t;

	bk = open(filename, O_RDONLY);
	if (bk == -1)
		return (0);
	taf = malloc(sizeof(char) * letters);
	t = read(bk, taf, letters);
	w = write(STDOUT_FILENO, taf, t);

	free(taf);
	close(bk);
	return (w);
}
