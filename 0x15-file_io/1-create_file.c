#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 *
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int mr;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

	mr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (mr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (mletters = 0; text_content[mletters]; mletters++)
		;

	rwr = write(fd, text_content, mletters);

	if (rwr == -1)
		return (-1);

	close(mr);

	return (1);
}
