#include "main.h"

/**
 * append_text_to_file - At the end of a file append text.
 * @filename: Is a pointer to the name of the file created.
 * @text_content: The string to add to the end of
 * the file created.
 *
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
