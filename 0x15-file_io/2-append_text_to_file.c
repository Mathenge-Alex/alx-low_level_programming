#include "main.h"
/**
  * _strlen - Function finds length of a string
  * @s: input char
  * Return: String length
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
* append_text_to_file - Function appends text at the file end
* @filename: Data file
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t letters_num;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (file - 1);
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
