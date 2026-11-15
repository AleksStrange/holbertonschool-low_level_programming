#include "main.h"

/**
 * create_file - Crée un fichier.
 * @filename: Nom du fichier à creer.
 * @text_content: Chaine de caractères à creer dans le fichier.
 *
 * Return: 1 (Succes) ou 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t wval;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		while (text_content[len] != '\0')
			len++;
		wval = write(fd, text_content, len);
		if (wval == -1 || wval != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
