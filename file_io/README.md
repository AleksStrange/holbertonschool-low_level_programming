# C - File I/O

Ce projet porte sur la manipulation de fichiers en C à l'aide des appels système POSIX (`open`, `read`, `write`, `close`) et des descripteurs de fichiers.

## Fichiers du projet

* **`0-read_textfile.c`** : Lit un fichier texte et l'affiche sur la sortie standard POSIX (`STDOUT_FILENO`).

* **`1-create_file.c`** : Crée un fichier avec les permissions `rw-------` (`0600`) et y écrit une chaîne de caractères (ou le tronque s'il existe déjà).

* **`2-append_text_to_file.c`** : Ajoute une chaîne de caractères à la fin d'un fichier existant sans écraser son contenu.

* **`3-cp.c`** : Copie le contenu d'un fichier source vers un fichier destination par blocs de `1024` octets, avec gestion complète des erreurs et codes de sortie (`97` à `100`).
