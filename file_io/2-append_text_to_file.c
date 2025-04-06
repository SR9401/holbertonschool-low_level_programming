#include "main.h"
/**
*append_text_to_file - fonction qui ajoute du texte a la fin dun fichier
*
*@filename: nom de fichier
*
*@text_content: texte a copier
*
*Return: 1 on success and -1 on failure
*
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
