Ce README contient les infos lié au projet "C - Simple Calculator" une fois terminer :

# Simple Calculator

## Description
Une calculatrice modulaire en ligne de commande écrite en C, respectant les normes de codage Betty et les consignes strictes de compilation.

## Commandes de compilation
Pour compiler le programme, utilisez la commande exacte suivante :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Instructions d'exécution
Lancez l'exécutable compilé avec :
```
./calculator
```

Suivez ensuite le menu interactif :
- `1` : Addition (`add`)
- `2` : Soustraction (`sub`)
- `3` : Multiplication (`multi`)
- `4` : Division (`divide`)
- `0` : Quitter (`Quit`)

## Opérations prises en charge

- Addition de deux nombres
- Soustraction de deux nombres
- Multiplication de deux nombres
- Division de deux nombres (avec gestion sécurisée de l'erreur en cas de division par zéro)

## Comportement numérique (Entiers vs Décimaux)

- **Choix du menu (`c`) :** Géré en nombres entiers (`int`).
- **Saisie des calculs et résultats (`a` et `b`) :** Gérés en nombres décimaux (`float`) pour permettre des résultats précis (par exemple : `2.5`). Les résultats affichés sont formatés avec une précision de deux chiffres après la virgule (`%.2f`).

## Limitations connues
- Le programme ne gère pas les saisies non-numériques inattendues (ce comportement est intentionnel et accepté à cette étape du projet).
