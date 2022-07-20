#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, a = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[a] != '\0')
	{
		a++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(file, text_content, a);

	if (file == -1 && w == -1)
		return (-1);

	close(file);

	return (1);
}
