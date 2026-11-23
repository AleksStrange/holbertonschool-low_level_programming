# Dans heap_example.c

## Voila le resultat de Valgrind sur heap_example.c :
'''
==24883== Memcheck, a memory error detector
==24883== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==24883== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==24883== Command: ./heap_example
==24883== 
heap_example: allocations and a deliberate leak
  alice=0x4a91480 name=0x4a914d0 age=30
  bob=0x4a91520 name=0x4a91570 age=41
==24883== 
==24883== HEAP SUMMARY:
==24883==     in use at exit: 6 bytes in 1 blocks
==24883==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==24883== 
==24883== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==24883==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==24883==    by 0x4001211: person_new (heap_example.c:21)
==24883==    by 0x40012FA: main (heap_example.c:51)
==24883== 
==24883== LEAK SUMMARY:
==24883==    definitely lost: 6 bytes in 1 blocks
==24883==    indirectly lost: 0 bytes in 0 blocks
==24883==      possibly lost: 0 bytes in 0 blocks
==24883==    still reachable: 0 bytes in 0 blocks
==24883==         suppressed: 0 bytes in 0 blocks
==24883== 
==24883== For lists of detected and suppressed errors, rerun with: -s
==24883== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0).
'''
### Bilan général (HEAP SUMMARY):
Il y a eu 5 allocations (5 allocs) pour 4 libérations (4 frees), et il reste 6 octets dans 1 bloc encore alloués à la fin du programme (in use at exit: 6 bytes in 1 blocks).

### Type d'erreur :
Fuite mémoire (definitely lost: 6 bytes in 1 blocks).
### Objet mémoire concerné :
Le bloc de 6 octets alloué sur le heap via malloc dans person_new, appelé depuis main. (6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==24883==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==24883==    by 0x4001211: person_new (heap_example.c:21)
==24883==    by 0x40012FA: main (heap_example.c:51))
### Cause / durée de vie :
Parmi 5 allocations et 4 free, ce bloc de 6 octets n'a pas été libéré avant la sortie du programme (fuite liée à une désallocation manquante).

# Dans aliasing_example.c

## Voila le résultat de valgrind sur aliasing_example.c
'''
==31039== Memcheck, a memory error detector
==31039== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==31039== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==31039== Command: ./aliasing_example
==31039== 
aliasing_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a91480 b=0x4a91480 a[2]=22 b[2]=22
  after free(a): b=0x4a91480 (dangling)
==31039== Invalid read of size 4
==31039==    at 0x40012F2: main (aliasing_example.c:42)
==31039==  Address 0x4a91488 is 8 bytes inside a block of size 20 free'd
==31039==    at 0x48538BF: free (vg_replace_malloc.c:990)
==31039==    by 0x40012CE: main (aliasing_example.c:38)
==31039==  Block was alloc'd at
==31039==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==31039==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==31039==    by 0x4001272: main (aliasing_example.c:30)
==31039== 
  reading b[2]=22
==31039== Invalid write of size 4
==31039==    at 0x4001312: main (aliasing_example.c:44)
==31039==  Address 0x4a9148c is 12 bytes inside a block of size 20 free'd
==31039==    at 0x48538BF: free (vg_replace_malloc.c:990)
==31039==    by 0x40012CE: main (aliasing_example.c:38)
==31039==  Block was alloc'd at
==31039==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==31039==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==31039==    by 0x4001272: main (aliasing_example.c:30)
==31039== 
==31039== Invalid read of size 4
==31039==    at 0x4001320: main (aliasing_example.c:45)
==31039==  Address 0x4a9148c is 12 bytes inside a block of size 20 free'd
==31039==    at 0x48538BF: free (vg_replace_malloc.c:990)
==31039==    by 0x40012CE: main (aliasing_example.c:38)
==31039==  Block was alloc'd at
==31039==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==31039==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==31039==    by 0x4001272: main (aliasing_example.c:30)
==31039== 
  wrote b[3]=1234
==31039== 
==31039== HEAP SUMMARY:
==31039==     in use at exit: 0 bytes in 0 blocks
==31039==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==31039== 
==31039== All heap blocks were freed -- no leaks are possible
==31039== 
==31039== For lists of detected and suppressed errors, rerun with: -s
==31039== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)
'''
### Bilan général (HEAP SUMMARY):
Il y a eu 2 allocations (2 allocs) pour 2 libérations (2 frees), 0 octet restant en mémoire à la sortie (no leaks are possible), en revanche, Valgrind détecte 3 erreurs d'accès mémoire (use-after-free).

### Type d'erreur :
Lecture invalide de 4 octets (Invalid read of size 4) à aliasing_example.c:42 (printf("reading b[2]=%d\n", b[2])) : lecture de l'élément b[2] (situé 8 octets après le début du bloc de 20 octets) après que le bloc a été libéré par free(a) à la ligne 38.
​Écriture invalide de 4 octets (Invalid write of size 4) à aliasing_example.c:44 (b[3] = 1234) : modification de l'élément b[3] (situé 12 octets après le début du bloc de 20 octets) sur une mémoire déjà libérée.
Lecture invalide de 4 octets (Invalid read of size 4) à aliasing_example.c:45 (printf("wrote b[3]=%d\n", b[3])) : relecture de b[3] (12 octets dans le bloc libéré) toujours après free(a).
### Objet mémoire concerné :
Un tableau d'entiers de 20 octets (5 int de 4 octets) alloué sur le heap par malloc dans make_numbers (aliasing_example.c:12, appelé depuis main ligne 30).
​Ce bloc est pointé par a et par son alias b (b = a), puis libéré via free(a) dans main à la ligne 38.
### Cause / durée de vie :
​free(a) met fin à la durée de vie du bloc de 20 octets sur le heap.
​Comme b est un alias de a, b reste un pointeur valide en apparence (dangling pointer) qui contient toujours l'ancienne adresse du bloc. Déréférencer b (b[2] et b[3]) après free(a) constitue un use-after-free (comportement indéfini), même si le programme affiche des valeurs sans planter immédiatement.

# Correction d'une erreur IA sur heap_example.c

**Affirmation erronée de l'IA :** Puisqu'il y a eu 5 allocations (5 allocs) pour 4 libérations (4 frees), il reste 4 blocs non libérés en mémoire, et definitely lost signifie que le programme a essayé de lire une zone déjà libérée. »
**Pourquoi c'est faux :** Valgrind indique 5 allocs et 4 frees, mais (in use at exit est de 6 bytes in 1 blocks). Il ne reste donc pas 4 blocs, mais 1 seul bloc de 6 octets encore alloué à la sortie du programme.
Ce que veut dire definitely lost : ce n'est pas une lecture après free (use-after-free), mais une fuite mémoire certaine (memory leak) : un bloc alloué sur le heap par malloc (dans person_new à heap_example.c:21, appelé depuis main à la ligne 51) n'a pas été libéré avant la fin de l'exécution.
**Correction :** Dans heap_example.c, Valgrind signale une fuite mémoire certaine (definitely lost) de 6 octets dans 1 bloc (sur 5 allocs et 4 frees), alloué par malloc dans person_new (heap_example.c:21, depuis main ligne 51) et non libéré avant la fin du programme.
