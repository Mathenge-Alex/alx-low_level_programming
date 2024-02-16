#include "main.h"
/**
* append_text_to_file - Function appends text at the file end
* @filename: Name of the data file
* @text_content: The null terminated string to append at the file end.
* Return: Returns 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int leng;
	int file_d;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	leng = 0;
	while (text_content[leng])
		leng++;

	bytes_written = write(file_d, text_content, leng);
	if (bytes_written == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
