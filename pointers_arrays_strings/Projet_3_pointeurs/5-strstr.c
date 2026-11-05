#include "main.h"
#include <stddef.h>


/**
 * _strstr - Localise une sous-chaîne.
 * @haystack: La chaîne de caractères principale dans laquelle chercher.
 * @needle: La sous-chaîne à rechercher.
 * Return: Un pointeur vers le début de la sous-chaîne trouvée,
 * ou NULL si elle n'est pas trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0' && haystack[i] == needle[i])
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
