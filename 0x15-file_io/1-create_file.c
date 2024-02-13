#include "main.h"
/**
  * _strlen - Function finds string Length
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
* create_text_file - Function creates a text_file
* @text_filename: The text_file
* @text_content: text_File content
* Return: Returns 1 on success, or -1 on failure
*/
int create_text_file(const char *text_filename, char *text_content)
{
	ssize_t letters_num;
	int text_file;

	if (!text_filename)
		return (1);
	text_file = open(text_filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		letters_num = write(text_file, text_content, _strlen(text_content));
		if (letters_num == -1)
		{
			close(text_file);
			return (-1);
		}
	}
	close(text_file);
	return (1);
}
