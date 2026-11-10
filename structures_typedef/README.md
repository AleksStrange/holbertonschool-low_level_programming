# Structures & Typedef

Ce dossier contient les exercices du projet "C - Structures, typedef" axés sur l'utilisation des structures (`struct`) et des types personnalisés (`typedef`) en langage C.

## Description des fichiers

* `dog.h` : Fichier d'en-tête contenant la définition de la structure `dog`, l'alias de type `dog_t` et les prototypes de toutes les fonctions.

* `1-init_dog.c` : Fonction qui initialise une variable de type `struct dog`.

* `2-print_dog.c` : Fonction qui affiche les informations d'un chien (`name`, `age`, `owner`).

* `3-dog.h` : Définition du nouveau type `dog_t` comme nouvel alias pour `struct dog`.

* `4-new_dog.c` : Fonction qui crée un nouveau chien en allouant dynamiquement la mémoire nécessaire pour ses chaînes de caractères et sa structure.

* `5-free_dog.c` : Fonction qui libère proprement toute la mémoire allouée dynamiquement pour un `dog_t`.
