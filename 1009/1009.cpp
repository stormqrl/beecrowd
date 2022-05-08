#include <stdio.h>
int main() {
  double r(.0), s(.0);
  scanf("%*s %lf %lf", &r, &s);
  printf("TOTAL = R$ %.2lf\n", r + .15 * s);
  return 0;
}