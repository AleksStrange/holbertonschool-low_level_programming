# Pointers, Arrays, and Strings (Rangé dans le dossier "Projet_1_pointeurs").

Ce projet regroupe une série d'exercices en langage C axés sur la manipulation avancée des pointeurs, des tableaux et des chaînes de caractères, développés dans le cadre du cursus Holberton School.

## Structure des fichiers

| Fichier | Description |
| :--- | :--- |
| `0-reset_to_98.c` | Réinitialise la valeur pointée par un pointeur d'entier à `98`. |
| `1-swap.c` | Échange les valeurs de deux entiers via leurs pointeurs. |
| `2-strlen.c` | Calcule et renvoie la longueur d'une chaîne de caractères. |
| `3-puts.c` | Affiche une chaîne de caractères suivie d'un saut de ligne sur `stdout`. |
| `4-print_rev.c` | Affiche une chaîne de caractères à l'envers, suivie d'un saut de ligne. |
| `5-rev_string.c` | Inverse directement une chaîne de caractères en mémoire. |
| `6-puts2.c` | Affiche un caractère sur deux d'une chaîne, en commençant par le premier. |
| `7-puts_half.c` | Affiche la seconde moitié d'une chaîne de caractères. |
| `8-print_array.c` | Affiche les `n` premiers éléments d'un tableau d'entiers. |
| `9-strcpy.c` | Copie la chaîne pointée par le buffer source vers la destination (`\0` inclus). |
| `100-atoi.c` | Convertit une chaîne de caractères en entier, en gérant tous les signes `+`/`-` et la protection contre l'overflow. |

## Compilation et Normes

* **Norme de code :** Respect du style Betty.
* **Standard C :** Compilé avec GCC selon la norme C89 (`-std=gnu89`).
* **Flags de compilation :** `-Wall -Werror -Wextra -pedantic -fsanitize=signed-integer-overflow`
