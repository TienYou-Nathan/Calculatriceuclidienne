/*
 ============================================================================
 Name        : calc.c
 Author      : jambon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int main(void) {
	division euclidienne;
	euclidienne.dividende = 10;
	euclidienne.diviseur = 4;
	division deux;
	deux.dividende = 10;
	deux.diviseur = 8;
	addition(&deux, &euclidienne);
	printf("%i\n%i\n", deux.dividende, deux.diviseur);
	return EXIT_SUCCESS;
}
