# C - More malloc, free

Ce projet aborde des concepts avancés d'allocation dynamique de mémoire en C en utilisant `malloc`, `free`, et `exit`, tout en respectant strictement les normes de style de code **Betty**.

## Fichiers et Prototypes

| Fichier | Description | Prototype |
| :--- | :--- | :--- |
| `0-malloc_checked.c` | Alloue de la mémoire à l'aide de `malloc`. Quitte avec le statut `98` en cas d'échec. | `void *malloc_checked(unsigned int b);` |

| `1-string_nconcat.c` | Concatène deux chaînes de caractères en ne prenant que les `n` premiers octets de la seconde chaîne. | `char *string_nconcat(char *s1, char *s2, unsigned int n);` |

| `2-calloc.c` | Alloue de la mémoire pour un tableau d'éléments et initialise chaque octet à zéro (`0`). | `void *_calloc(unsigned int nmemb, unsigned int size);` |

| `3-array_range.c` | Crée un tableau d'entiers contenant toutes les valeurs de `min` à `max` incluses. | `int *array_range(int min, int max);` | 
