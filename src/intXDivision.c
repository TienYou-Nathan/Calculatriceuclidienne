/*
 * intXDivision.c
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */


#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int intXDivision(division *euclidienne, int x) {
	euclidienne->dividende *= x;
	euclidienne->diviseur *= x;
	return 0;
}
