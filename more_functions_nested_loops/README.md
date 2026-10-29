# C - More functions, more nested loops

Ce projet réalisé dans le cadre du projet "C - More functions, more nested loops" du cursus de la Holberton School aborde l'utilisation des fonctions en C, des boucles imbriquées, de la conversion de types et du formatage de texte dans le terminal à l'aide de la fonction personnalisée `_putchar`.


## 📂 Fichiers et Descriptions

Voici la liste de tous les programmes et fonctions développés dans ce répertoire (`more_functions_nested_loops`) :

* **`_putchar.c`** : Fonction personnalisée permettant d'afficher un caractère unique dans le terminal.

* **`main.h`** : Fichier d'en-tête contenant tous les prototypes de fonctions ainsi que les inclusions nécessaires pour compiler le projet.

* **`0-isupper.c`** : Fonction qui vérifie si un caractère est une lettre majuscule (renvoie `1` si c'est le cas, `0` sinon).

* **`1-isdigit.c`** : Fonction qui vérifie si un caractère est un chiffre compris entre `0` et `9`.

* **`2-mul.c`** : Fonction qui multiplie deux entiers entre eux.

* **`3-print_numbers.c`** : Fonction qui affiche les chiffres de `0` à `9`, suivis d'un saut de ligne, en n'utilisant `_putchar` que deux fois.

* **`4-print_most_numbers.c`** : Fonction qui affiche les chiffres de `0` à `9` (sauf le `2` et le `4`), suivis d'un saut de ligne.

* **`5-more_numbers.c`** : Fonction qui affiche 10 fois de suite les nombres de `0` à `14`, suivis d'un saut de ligne.

* **`6-print_line.c`** : Fonction qui trace une ligne droite dans le terminal à l'aide du caractère `_`.

* **`7-print_diagonal.c`** : Fonction qui trace une ligne diagonale à l'aide du caractère `\`.

* **`8-print_square.c`** : Fonction qui affiche un carré de taille `size` en utilisant le caractère `#`.

* **`9-fizz_buzz.c`** : Programme du test classique *Fizz-Buzz* affichant les nombres de `1` à `100`, en remplaçant les multiples de 3 par "Fizz", de 5 par "Buzz", et les multiples des deux par "FizzBuzz".

* **`10-print_triangle.c`** : Fonction qui affiche un triangle aligné à droite de taille `size` en utilisant le caractère `#`, suivi d'un saut de ligne.


## ⚙️ Compilation et Tests

Tous les programmes et fonctions C de ce projet ont été testés et compilés en utilisant `gcc` avec les options strictes suivantes :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <fichiers_source.c> -o <nom_executable>
