#include <stdio.h>
#include <stdlib.h>

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie la valeur de nombre par 3 
}

int main()
{
    int nombre = 5;
    int *pointeur = &nombre; // le pointeur prend l'adresse de nombre

    triplePointeur(pointeur); // On envoie pointeur (l'adresse de nombre) à la fonction
    printf("%d", *pointeur); // On affiche la valeur de nombre avec *pointeur

    return 0;
}
