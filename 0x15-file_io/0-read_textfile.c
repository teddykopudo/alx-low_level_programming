#include "main.h"

/**
 * read_textfile - Read a text file and print its content to standard output
 * @filename: Name of the text file
 * @letters: Number of letters to read and print
 * Return: actual number of letters read and printed, or 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	if (!filename)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
	{
		free(buffer);
		return (0);
	}

	read_bytes = fread(buffer, 1, letters, fp);
	if (read_bytes == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[read_bytes] = '\0';

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes != read_bytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	fclose(fp);
	free(buffer);

	return (read_bytes);
}
