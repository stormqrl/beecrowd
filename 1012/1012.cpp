#include <stdio.h>
int main() {
  double a(.0), b(.0), c(.0);
  scanf("%lf%lf%lf", &a, &b, &c);
  printf(
      "TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: "
      "%.3f\nRETANGULO: %.3f\n",
      (a * c) / 2., c * c * 3.14159, ((a + b) * c) / 2., b * b, a * b);
  return 0;
}