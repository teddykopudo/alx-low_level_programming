#include "main.h"

/**
 * read_textfile - Read a text file and print its content to standard output
 * @filename: Name of the text file
 * @letters: Number of letters to read and print
 * Return: actual number of letters read and printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t letters2 = 0;
	char *buff;
	ssize_t written_bytes;

	if (!filename)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}

	letters2 = read(file, buff, letters);
	close(file);

	if (letters2 == -1)
	{
		free(buff);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buff, letters2);
	free(buff);

	if (written_bytes == -1 || (size_t)written_bytes != (size_t)letters2)
		return (0);

	return (written_bytes);
}
