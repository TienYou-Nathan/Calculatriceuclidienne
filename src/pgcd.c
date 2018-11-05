/*
 * pgcd.c
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */

#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int pgcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return pgcd(b, a % b);
}
