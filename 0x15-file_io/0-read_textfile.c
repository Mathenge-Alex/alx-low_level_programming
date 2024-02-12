#include "main.h"
/**
* read_file_textfile - Function reads a file_text file and
* prints it to the POSIX standard output
* @filename: The file
* @letters: Number of letters
* Return: Returns letters printed or 0 if fail.
*/
ssize_t read_file_textfile(const char *filename, size_t letters)
{
	ssize_t letters_num;
	int file;
	char *file_text;

	if (!filename)
		return (0);
	file_text = malloc(sizeof(char) * letters + 1);
	if (file_text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(file_text);
		return (0);
	}
	letters_num = read(file, file_text, sizeof(char) * letters);
	if (letters_num == -1)
	{
		free(file_text);
		close(file);
		return (0);
	}
	letters_num = write(STDOUT_FILENO, file_text, letters_num);
	if (letters_num == -1)
	{
		free(file_text);
		close(file);
		return (0);
	}
	free(file_text);
	close(file);
	return (letters_num);
}
