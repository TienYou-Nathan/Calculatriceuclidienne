/*
 * addition.c
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */


#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int addition(division *un, division *deux) {
	egaliser(un, deux);
	un->dividende += deux->dividende;
	simplification(un);
	return 0;
}
