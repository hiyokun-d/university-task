#include <stdio.h>
#include <math.h>

int main()
{
  double P, R, A;
  int t;

  printf("initial deposit: ");
  scanf("%lf", &P);
  getchar();

  printf("annual interest: ");
  scanf("%lf", &R);

  printf("number of years: ");
  scanf("%d", &t);
  getchar();

  A = P * pow((1 + R / 100), t);

  printf("total accumulated amount: %.2lf\n", A);
  return 0;
}
