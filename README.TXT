Masquage : presque ok
Algo en recursive a trouver
-> Taille maximale de la grille = Racine carree du nombre de tetriminos * 4

Algo =
Tant que la grille ne depasse pas [taille], on essaye de caler les pieces jusqu'a la derniere.
Si les pieces ne rentrent pas : On les cale dans un ordre different.

MAIN =

- Creation de la grille;
- Creation du tableau de struct;
- Recuperation des arguments et parsing;
- Stockage des arguments dans le tableau de struct;
- Calcul de la taille max de la grille : Racine du nbr de tetriminos * 4;
- SI les tetriminos ne depassent pas
	- On rajoute des tetriminos;
  SINON
	- On recommence en les placant dans un ordre different;
- On affiche la grille;
