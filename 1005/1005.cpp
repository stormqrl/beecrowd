#include <stdio.h>
int main() {
  double r(.0), s(.0);
  scanf("%lf%lf", &r, &s);
  printf("MEDIA = %.5lf\n", (3.5 * r + 7.5 * s) / 11.);
  return 0;
}