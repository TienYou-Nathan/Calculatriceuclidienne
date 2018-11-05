#include "calcul.h"

void pgcd(int a, int b)
{
  int k = 1, d = 1;
  for (k = 1; k <= a && k <= b; k++)
    if (a % k == 0 && b % k == 0)
      d = k;
  return d;
}

int calcul_nombres_rationels(int n1, int n2)
{
    int n3, n4;
    n3 = n1 / pgcd(n1, n2);
    n4 = n2 / pgcd(n1, n2);
    return 0;
}
