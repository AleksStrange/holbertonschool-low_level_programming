# Pointers, Arrays, and Strings

Ce répertoire regroupe les différents projets et exercices en langage C axés sur la manipulation des pointeurs, des tableaux et des chaînes de caractères.

---

## 📁 Projet 1 : Pointeurs et Tableaux de base (Dossier "Projet_1_pointeurs")

Ce premier projet se concentre sur la manipulation de la mémoire, des pointeurs et des fonctions de base sur les chaînes.

| Fichier | Description |
| :--- | :--- |
| `0-reset_to_98.c` | Réinitialise la valeur pointée par un pointeur d'entier à `98`. |
| `1-swap.c` | Échange les valeurs de deux entiers via leurs pointeurs. |
| `2-strlen.c` | Calcule et renvoie la longueur d'une chaîne de caractères. |
| `3-puts.c` | Affiche une chaîne de caractères suivie d'un saut de ligne sur `stdout`. |
| `4-print_rev.c` | Affiche une chaîne de caractères à l'envers, suivie d'un saut de ligne. |
| `5-rev_string.c` | Inverse directement une chaîne de caractères en mémoire. |
| `6-puts2.c` | Affiche un caractère sur deux d'une chaîne, en commençant par le premier. |
| `7-puts_half.c` | Affiche les $n$ premiers éléments d'une chaîne de caractères. |
| `8-print_array.c` | Affiche $n$ éléments d'un tableau d'entiers. |
| `9-strcpy.c` | Copie la chaîne pointée par le buffer source vers la destination (`\0` inclus). |
| `100-atoi.c` | Convertit une chaîne de caractères en entier, en gérant tous les signes `+`/`-` et la protection contre l'overflow. |

---

## 📁 Projet 2 : Manipulation avancée et Recodage (Dossier "Projet_2_pointeurs")

Ce deuxième projet approfondit la manipulation avancée des chaînes et le recodage de fonctions de la bibliothèque standard.

| Fichier | Description |
| :--- | :--- |
| `0-strcat.c` | Concatène deux chaînes de caractères en écrasant le caractère nul. |
| `1-strncat.c` | Concatène deux chaînes en utilisant au maximum $n$ octets d'une chaîne source. |
| `2-strncpy.c` | Copie une chaîne de caractères sur un nombre $n$ d'octets défini. |
| `3-strcmp.c` | Compare deux chaînes de caractères et renvoie leur différence. |
| `4-rev_array.c` | Inverse le contenu d'un tableau d'entiers en mémoire. |
| `5-string_toupper.c` | Convertit toutes les lettres minuscules d'une chaîne en majuscules. |
| `6-cap_string.c` | Met en majuscule la première lettre de chaque mot selon des séparateurs définis. |
| `7-leet.c` | Encode une chaîne de caractères en 1337 (leet speak) en utilisant des tableaux parallèles. |
| `_putchar.c` | Fonction d'affichage d'un caractère unique via la sortie standard. |
| `main.h` | Fichier d'en-tête contenant tous les prototypes des fonctions. |

---

## Compilation et Normes

* **Norme de code :** Respect strict du style Betty.
* **Standard C :** Compilé avec GCC selon la norme C89 (`-std=gnu89`).
* **Flags de compilation :** `-Wall -Werror -Wextra -pedantic -fsanitize=signed-integer-overflow`.
