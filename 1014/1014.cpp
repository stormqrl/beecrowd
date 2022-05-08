#include <stdio.h>
int main() {
  int x(0);
  double y(.0);
  scanf("%d%lf", &x, &y);
  printf("%.3f km/l\n", (double)x / y);
  return 0;
}