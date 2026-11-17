# Variadic functions

## Description des modules pour le projet "C - Variadic functions".

* **`0-sum_them_all.c`** : calcule et retourne la somme d'un nombre variable d'entiers passés en argument (`0` si le compte est nul).

* **`1-print_numbers.c`** : affiche une suite d'entiers séparés par une chaîne donnée, suivie d'un retour à la ligne.

* **`2-print_strings.c`** : affiche une suite de chaînes de caractères séparées par un séparateur (avec gestion de `(nil)` pour les pointeurs `NULL`), suivie d'un retour à la ligne.

* **`3-print_all.c`** : affiche des arguments de types variés (`char`, `int`, `float` et `char *`) selon une chaîne de format, avec un séparateur entre les valeurs affichées et un retour à la ligne final.

  * Utilise une table de correspondance basée sur la structure `fmt_t` (`struct fmt_func`) et des pointeurs de fonction (`p_char`, `p_int`, `p_float`, `p_str`) pour associer chaque spécificateur (`c`, `i`, `f`, `s`) à son affichage dédié.
  * Ignore les caractères de format non reconnus et affiche `(nil)` lorsqu'une chaîne (`char *`) vaut `NULL`.
  * Respecte les contraintes du projet : un seul fichier source (avec la définition de structure et le `typedef` placés dans `variadic_functions.h`), cinq fonctions au total, deux boucles `while`, deux conditions `if` et aucun mot-clé interdit (`switch`, `break`, `else`, `for`, `goto`, ternaire ou `do...while`).
