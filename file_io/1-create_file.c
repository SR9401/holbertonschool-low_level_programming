#include "main.h"

/**
* create_file - fonction pour creer un fichier
*
*@filename: nom de fichier
*
*@text_content: contenu du fichier
*
*Return: rrrtttt
**/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
