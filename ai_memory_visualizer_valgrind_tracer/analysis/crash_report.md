# Rapport de crash de crash_example.c

## Description du crash

Lors de l'exécution de ./crash_example, le programme affiche (crash_example: deterministic NULL dereference (segmentation fault)) et requesting n=0, puis s'arrête avec une erreur de segmentation (segmentation fault).
L'accès mémoire invalide se produit à la ligne 32 dans main (crash_example.c:32), lors de l'écriture nums[0] = 42; À cet instant, le pointeur nums vaut NULL, ce qui correspond à un déréférencement de pointeur nul (écriture à une adresse nulle / non mappée).

### Zones mémoire impliquées
- **Le stack :** les variables locales nums (int *) et n (int) sont allouées sur le stack dans main (crash_example.c:24-25).
- **Le heap :** la fonction allocate_numbers est prévue pour allouer dynamiquement un tableau d'entiers sur le heap via malloc (crash_example.c:12), mais aucune allocation heap n'est effectuée lorsque n <= 0.

## Chaîne causale et cause racine (Root Cause Analysis)

La cause racine du crash est l'absence de vérification de pointeur nul (NULL) sur le retour de allocate_numbers(n) avant d'écrire dans nums[0] dans main.

### Chaîne causale étape par étape
1. **Ligne 25 (main) :** int n = 0; fixe la taille demandée à 0.
2. **Ligne 24 (main) :** int *nums = NULL; initialise le pointeur à NULL.
3. **Ligne 30 (main) :** appel nums = allocate_numbers(n); avec n = 0.
4. **Lignes 9–10 (allocate_numbers) :** la condition if (n <= 0) est vraie, donc la fonction retourne immédiatement NULL sans appeler malloc.
5. **Ligne 30 (main) :** nums reçoit la valeur NULL.
6. **Ligne 32 (main) :** l'instruction nums[0] = 42; tente d'écrire la valeur 42 via nums alors qu'il vaut NULL.

## Pourquoi l'accès mémoire est invalide

En C, déréférencer un pointeur nul (NULL) — ici via l'écriture nums[0] = 42; — relève du comportement indéfini (undefined behavior) par NULL pointer dereference. Le pointeur ne référence aucun objet ou bloc mémoire valide sur le heap : écrire à cette adresse constitue un accès mémoire invalide qui déclenche la faute de segmentation observée lors de l'exécution.

## Évaluation critique de suggestions d'IA

**Piste erronée ou spéculative d'IA :**
Une IA a suggérer que le crash provient d'une corruption du heap dans la boucle for de allocate_numbers (crash_example.c:16-17) ou d'un appel invalide à free(nums) à la ligne 36 (crash_example.c:36).
**Pourquoi c'est faux / spéculatif :** avec n = 0, la condition if (n <= 0) renvoie NULL dès la ligne 10, si bien que malloc n'est pas appelé et la boucle for (i = 0; i < n; i++) ne s'exécute pas. De plus, le programme s'arrête dès l'écriture invalide à la ligne 32 (nums[0] = 42;), avant d'atteindre printf (ligne 34) ou free(nums) (ligne 36).
- **Ce qui est exact :** l'origine déterministe de l'erreur est bien n = 0 entraînant allocate_numbers(0) == NULL, suivi du déréférencement de nums dans nums[0] = 42;.
