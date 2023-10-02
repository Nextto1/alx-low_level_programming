#include "main.h"

/**
 * create_file -It creates a file from the function
 * @filename: Is a pointer that points to
 * the name of the file to create.
 * @text_content: Is a  pointer to a string
 * to write to the file created
 *
 * Return: from the function if it fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int bk, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	bk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(bk, text_content, length);

	if (bk == -1 || w == -1)
		return (-1);

	close(bk);

	return (1);
}
