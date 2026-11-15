#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Nom du fichier dans lequel on ajoute le texte.
 * @text_content: Chaine à ajouter dans le fichier.
 *
 * Return: 1 (Succes) ou -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t wval;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	wval = write(fd, text_content, len);
	if (wval == -1 || wval != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
