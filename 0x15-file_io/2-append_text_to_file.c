#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mr;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

	mr = open(filename, O_WRONLY | O_APPEND);

	if (mr == -1)
		return (-1);

	if (text_content)
	{
		for (mletters = 0; text_content[mletters]; mletters++)
			;

		rwr = write(mr, text_content, mletters);

		if (rwr == -1)
			return (-1);
	}

	close(mr);

	return (1);
}
