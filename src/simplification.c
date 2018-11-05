/*
 * simplification.c
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "index.h"

int simplification(division *moche) {
	int by = pgcd(moche->dividende, moche->diviseur);
	moche->dividende /= by;
	moche->diviseur /= by;
	return 0;
}
