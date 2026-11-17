# C - Function pointers

Ce répertoire contient les exercices du projet **C - Function pointers** réalisé dans le cadre du cursus Holberton School.

## Fichiers du projet

- `function_pointers.h` : Fichier d'en-tête regroupant les prototypes des tâches 0 à 2.
- `0-print_name.c` : Affiche un nom en appliquant la fonction passée en paramètre.
- `1-array_iterator.c` : Exécute une fonction donnée sur chaque élément d'un tableau d'entiers.
- `2-int_index.c` : Recherche un entier dans un tableau via une fonction de comparaison et renvoie son index.

---

## Tâche 3 : Calculatrice en ligne de commande (`calc`)

Cette tâche implémente une calculatrice modulaire reposant sur une table de correspondance et des pointeurs de fonctions pour associer dynamiquement un opérateur à son traitement arithmétique.

### Architecture des fichiers

- **`3-calc.h`** : Définit la structure `op_t` (associant une chaîne `char *op` à un pointeur de fonction `int (*f)(int, int)`), inclut les bibliothèques standards nécessaires (`<stdlib.h>`, `<stdio.h>`) et déclare l'ensemble des prototypes du module.
- **`3-op_functions.c`** : Contient les cinq opérations arithmétiques de base :
  - `op_add` : addition (`a + b`)
  - `op_sub` : soustraction (`a - b`)
  - `op_mul` : multiplication (`a * b`)
  - `op_div` : division entière (`a / b`), interrompt le programme avec `Error` et le code de sortie `100` si `b == 0`
  - `op_mod` : modulo (`a % b`), interrompt le programme avec `Error` et le code de sortie `100` si `b == 0`
- **`3-get_op_func.c`** : Implémente `get_op_func(char *s)` qui parcourt un tableau statique `ops[]` de structures `op_t` terminé par `{NULL, NULL}`. Si `s` correspond exactement à un opérateur valide sur un seul caractère, la fonction renvoie le pointeur de fonction associé (`ops[i].f`), sinon `NULL`.
- **`3-main.c`** : Point d'entrée du programme. Vérifie que quatre arguments sont fournis (`./calc num1 operator num2`), récupère la fonction correspondante via `get_op_func(argv[2])`, convertit les opérandes avec `atoi`, exécute le calcul via le pointeur de fonction et affiche le résultat.

### Flux d'exécution

1. L'utilisateur lance `./calc num1 operator num2`.
2. `main` contrôle que `argc == 4` (sinon sortie `98`).
3. `get_op_func` compare `argv[2]` aux entrées de `ops[]` et retourne l'adresse de la fonction correspondante (ou `NULL` si inconnu, entraînant la sortie `99`).
4. `main` convertit `argv[1]` et `argv[3]` en entiers (`atoi`) et appelle directement la fonction pointée.
5. Si l'opération est `/` ou `%` avec un diviseur nul, la fonction appelée affiche `Error` et quitte avec le statut `100`.

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc

# Gestion des erreurs et codes de sortie (`calc`)

| Condition d'erreur | Affichage | Code de retour (`$?`) |
| :--- | :---: | :---: |
| Nombre d'arguments différent de 4 (`argc != 4`) | `Error` | `98` |
| Opérateur non reconnu (`get_op_func` renvoie `NULL`) | `Error` | `99` |
| Division ou modulo par zéro (`b == 0`) | `Error` | `100` |
