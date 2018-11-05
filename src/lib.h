#ifndef LIB_H_
#define LIB_H_

typedef struct {
	int upperNum;
	int lowerNum;
} fraction;

void printMenu();

int pgcd(int a, int b);

void simplify(fraction *fract);

void equalize(fraction *a, fraction *b);

void add(fraction *a, fraction *b);

void substract(fraction *a, fraction *b);

void multiply(fraction *a, fraction *b);

void divide(fraction *a, fraction *b);

void intToFraction(fraction *a, int b);

#endif /* LIB_H_ */
