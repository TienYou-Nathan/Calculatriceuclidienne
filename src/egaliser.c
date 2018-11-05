/*
 * egaliser.c
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */

#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int egaliser(division *un, division *deux) {
	int simplifier = pgcd(un->diviseur, deux->diviseur);
	if (simplifier == 1) {
		int temp = un->diviseur;
		intXDivision(un, deux->diviseur);
		intXDivision(deux, temp);
		return 0;
	}

	if (un->diviseur > deux->diviseur) {
		intXDivision(deux, un->diviseur / deux->diviseur);
	} else if (deux->diviseur > un->diviseur) {
		intXDivision(un, deux->diviseur / un->diviseur);
	}
	return 0;
}
