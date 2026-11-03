# Measurement Methodology
Pour mesurer les performances du programme, j'ai utilisé la fonction "clock()" présente dans le header file <time.h>. La fonction clock() retourne un nombre entier, pour que ce soit plus comprehensible j'utilise CLOCKS_PER_SEC, qui permet d'obtenir une durée réelle en convertissant le résultat en secondes.
J'ai également rajouté un "(double)" pour garder les chiffres après la virgule et éviter d'avoir zéro à cause d'une division entière.
Et j'ai ensuite affiché les résultas à l'aide de printf dans un ordre bien précis, en précisent bien que je voulais 6 chiffres après la virgule.
Pour finir, j'ai compilé avec GCC en respectant des options strictes (les flags) : "-Wall -Werror -Wextra -pedentic -std=gnu89 -Who-long-long" pour assuré la sécurité et la fiabilité de mon code.
J'ai calculé indépendament trois phases, "build_dataset" qui est la phase de "construction des données", "process_dataset" qui est la phase de "traitement des données" et "reduce_checksum" qui est la phase de "calcul de réduction", ainsi qu'un chronométrage global des trois phases pour avoir le temps d'exécution du complet du programme.
Cette approche permet d'isoler précisément le comportement de chaque bloc de code et d'identifier les goulots d'étranglement sans perturber la logique générale du programme.
# Observed Performance Differences
Les résultats obtenus sont les suivants :
## Task 3 :

TOTAL seconds : 0,000289 |
BUILD_DATA seconds : 0,000117 |
PROCESS seconds : 0,000125 |
REDUCE seconds : 0,000046 |
## Task 2 :

### Exécution 1
Naive algorithm result: 625025000 |
Naive algorithm time: 1.159450 seconds |
Single-pass algorithm result: 25000 |
Single-pass algorithm time: 0.000043 seconds |
### Exécution 2
Naive algorithm result: 625025000 |
Naive algorithm time: 1.165999 seconds |
Single-pass algorithm result: 25000 |
Single-pass algorithm time: 0.000043 seconds |
### Exécution 3
Naive algorithm result: 625025000 |
Naive algorithm time: 1.125708 seconds |
Single-pass algorithm result: 25000 |
Single-pass algorithm time: 0.000045 seconds |

Naive algorithm temps moyen : 1,150385 seconds |
Single-pass algorithm temps moyen : 0,000044 seconds
## Task 1

### Exécution 1
Iterations: 100000000 |
Execution time: 0.331023 seconds
### Exécution 2
Iterations: 100000000 |
Execution time: 0.343194 seconds
### Exécution 3
Iterations: 100000000 |
Execution time: 0.342210 seconds


# Task 3 
On remarque que c'est la phase "process_dataset" (0;000125), suivi de près par "build_dataset" (0,000117) qui mobilisent la majorité du temps, alors que "reduce_checksum" (0,000046) est en réalité extrêmement rapide. "TOTAL" avec ses (0,000289) représente quand à lui l'addition du temps de toutes les phases du programme.
# Task 2
L'implémentation Single-pass algorithm est environ 25 667 fois plus rapide que le Naive algorithm.
# Task 1
Chaque exécution a été testée avec 100 000 000 itérations, les différants essaie montrent des performances stable, avec une moyenne d'exécution d'environ 0,338 s.
# Relation Between Runtime and Energy Consumption
Plus un programme met du temps à s'exécuter, plus il maintient le processeur à un niveau d'activité élevé, ce qui du coup augmente la consommation d'énergie global de la machine.
On peut donc en déduire qu'optimiser les phases "process_dataset" et "build_dataset" permetterait de reduire considerablement la consommation de la machine puisque qu'elle ne serait pas sollicité aussi longtemps.
# Limitations of the Experiment
Cela nous donne une idée mais l'experience se limite a un seul de test d'un seul lancement du programme, il n'y a donc pas de moyenne statistique qui peut précisément m'aider.
De plus ça dépend également des autres logiciels en cours en arriere plan lancé sur ma machine.
Egalement le projet utilise le temps d'exécution comme une estimation de l'activité du processeur, mais je n'ai pas d'outils pour mesurer directement la consommation réelle en watts.
# Practical Engineering Takeaway
Cette experience démontre que l'analyse phase par phase permet de comprendre exactement quelles phases sont à optimiser pour pouvoir atteindre un programme avec du code propre et le plus écologique possible.
L'instrumentation est donc super importante car si on ne mesure pas on ne peut pas optimiser.