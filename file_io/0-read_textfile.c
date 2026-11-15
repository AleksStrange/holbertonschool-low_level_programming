#include "main.h"

/**
 * read_textfile - Lit un fichier texte et l'affiche sur
 * la sortie standard POSIX.
 * @filename: Nom du fichier à lire.
 * @letters: Nombre de lettres à lire et afficher.
 *
 * Return: Nombre de lettres lues et affichées (wval), ou 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rval;
	ssize_t wval;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rval = read(fd, buf, letters);
	if (rval == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wval = write(STDOUT_FILENO, buf, rval);
	free(buf);
	close(fd);
	if (wval == -1 || wval != rval)
		return (0);
	return (wval);
}
