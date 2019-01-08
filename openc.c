#include <stdio.h>
#include <stdlib.h> // directives de préprocesseur

int main(int argc, char const *argv[]) //  fonction principale du programme
{
	int poids = 120;

	printf("Combien pesez-vous ?\n"); 
	scanf("%d", &poids);								// ces deux lignes entre les accolades s'appellent les instructions.
	// le \n permet de faire un retour à la ligne quand le code est compilé.
	printf("Olalaa, vous faites %d kilos, vous etes super gros !\n", poids);			// le \t permet une tabulation
	printf("Chouette chouette chouette, je vais réussir l'exercice je crois !\n");
	
	return 0;
}

/* 	%d veut dire qu'on souhaite afficher un int
	%ld veut dire qu'on souhaite afficher un long
	%f veut dire qu'on souhaite afficher un float
	%f veut dire qu'on souhaite afficher un double
	*/