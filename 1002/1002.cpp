#include <stdio.h>
int main() {
  double n = 3.14159, r(.0);
  scanf("%lf", &r);
  printf("A=%.4lf\n", (n * r * r));
  return 0;
}