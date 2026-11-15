#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_fd - Ferme un descripteur de fichier et quitte
 * avec 100 en cas d'erreur.
 * @fd: Descripteur de fichier a fermer.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy_content - Copie les données d'un descripteur vers un autre.
 * @fd_src: Descripteur du fichier source.
 * @fd_dest: Descripteur du fichier destination.
 * @file_src: Nom du fichier source pour les messages d'erreur.
 * @file_dest: Nom du fichier destination pour les messages d'erreur.
 */
void copy_content(int fd_src, int fd_dest, char *file_src, char *file_dest)
{
	ssize_t rval;
	ssize_t wval;
	char buf[1024];

	while ((rval = read(fd_src, buf, 1024)) > 0)
	{
		wval = write(fd_dest, buf, rval);
		if (wval == -1 || wval != rval)
		{
			close(fd_src);
			close(fd_dest);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_dest);
			exit(99);
		}
	}
	if (rval == -1)
	{
		close(fd_src);
		close(fd_dest);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
}
/**
 * main - Copie le contenu d'un fichier vers un autre fichier.
 * @argnum: Nombre d'arguments.
 * @argtab: Tableau des arguments.
 *
 * Return: 0 (Succes).
 */
int main(int argnum, char **argtab)
{
	int fd_src;
	int fd_dest;

	if (argnum != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argtab[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argtab[1]);
		exit(98);
	}
	fd_dest = open(argtab[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		close(fd_src);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argtab[2]);
		exit(99);
	}
	copy_content(fd_src, fd_dest, argtab[1], argtab[2]);
	close_fd(fd_src);
	close_fd(fd_dest);
	return (0);
}
