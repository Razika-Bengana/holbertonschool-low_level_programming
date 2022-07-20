#include "main.h"
#include "stdlib.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters that the function has to read and print
 * Return: the actual number of letters it could read and print,
 * or 0 if filename is NULL, or if 'write' fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t file, r, w;
	char *fptr;

	fptr = malloc(letters);

	if (fptr == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	r = read(file, fptr, letters);
	w = write(STDOUT_FILENO, fptr, r);

	if (r == -1 || w == -1 || w != r)
	{
		free(fptr);
		return (0);
	}

	free(fptr);
	close(file);

	return (w);
}
