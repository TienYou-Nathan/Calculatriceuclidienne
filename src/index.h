/*
 * index.h
 *
 *  Created on: 1 nov. 2018
 *      Author: legon
 */

#ifndef INDEX_H_
#define INDEX_H_

typedef struct {
	int dividende;
	int diviseur;
} division;

int simplification(division *moche);
int pgcd(int a, int b);
int egaliser(division *un, division *deux);
int intXDivision(division *euclidienne, int x);
int addition(division *un, division *deux);

#endif /* INDEX_H_ */
