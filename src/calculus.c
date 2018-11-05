#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

int pgcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return pgcd(b, a % b);
}

void simplify(fraction *fract) {
	int div = pgcd(fract->upperNum, fract->lowerNum);
	fract->upperNum /= div;
	fract->lowerNum /= div;
}

void equalize(fraction *a, fraction *b) {
	fraction temp = a;
	a->upperNum *= b->lowerNum;
	a->lowerNum *= b->lowerNum;
	b->upperNum *= temp.lowerNum;
	b->lowerNum *= temp.lowerNum;
}

void add(fraction *a, fraction *b) {
	equalize(a, b);
	a->upperNum += b->upperNum;
	simplify(a);
}

void substract(fraction *a, fraction *b) {
	equalize(a, b);
	a->upperNum -= b->lowerNum;
	simplify(a);
}

void multiply(fraction *a, fraction *b) {
	a->upperNum *= b->upperNum;
	a->lowerNum *= b->lowerNum;
	simplify(a);
}

void divide(fraction *a, fraction *b) {
	fraction temp = b;
	b->lowerNum = temp.upperNum;
	b->upperNum = temp.lowerNum;
	multiply(a, b);
}

void intToFraction(fraction *a, int b) {
	a->upperNum = b;
	a->lowerNum = 1;
}
