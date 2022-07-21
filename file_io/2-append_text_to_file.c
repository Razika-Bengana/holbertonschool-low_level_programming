#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the content of the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0, file, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[a] != '\0')
	{
		a++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, a);

	if (file == -1 || w == -1)
		return (-1);

	close(file);

	return (1);
}
