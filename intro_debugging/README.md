Ce README sera pour décrire le projet "Debugging Visualization with Python Tutor" qui consiste à débugger des codes volontairement faux, et bien comprendre et trouver les erreurs.


**/ Premier code : Le programme renvoi la valeur de n (qui reste toujours 10) au lieu de renvoyer la valeur de sum (qui est la variable qui accumule les résultats) pour nous donner la somme de tous chiffres additioné (i). La boucle se stop a i < n, donc à 9, alors que l'on dois inclure n (10) donc la boucle doit se stop a i <= n.

**/ Deuxieme code : Le programme rajoute +1 en trop à col après printf de row * col, vu que dans la boucle col prend déja +1, celui après printf est en trop et fausse tout. Il suffit donc de le retirer.

**/ Troisieme code : La variable current est mise comme current += row_sum(r, cols) ce qui fait qu'au lieu de juste contenir le resultat de la ligne active de row_sum, current additione toutes les lignes ensembles avant de s'additionner à Total, ce qui fausse tout. Il suffit de retier le + pour que current stock uniquement le resultat de la ligne active de row_sum avant de s'additioner à Total.
On pourrait également supprimer cette variable current et juste faire Total += row_sum(r, cols).