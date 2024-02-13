#include "main.h"
/**
  * _strlen - String Length
  * @s: input char
  * Return: Returns length of a string
**/
int _strlen(char *s)
{
	int j = 0;

	while (s[j])
	{
		j++;
	}
	return (j);
}
/**
* create_file - Function creates a file
* @filename: The file
* @text_content: File content
* Return: Returns 1 on success, or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t letters_num;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		letters_num = write(file, text_content, _strlen(text_content));
		if (letters_num == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
