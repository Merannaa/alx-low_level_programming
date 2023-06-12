#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int mr;
	ssize_t lenr1, lenw1;
	char *buffer;

	if (filename == NULL)
		return (0);
	mr = open(filename, O_RDONLY);
	if (mr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(mr);
		return (0);
	}
	lenr1 = read(mr, buffer, letters);
	close(mr);
	if (lenr1 == -1)
	{
		free(buffer);
		return (0);
	}
	lenw1 = write(STDOUT_FILENO, buffer, lenr1);
	free(buffer);
	if (lenr1 != lenw1)
		return (0);
	return (lenw1);
}
