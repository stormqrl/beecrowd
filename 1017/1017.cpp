#include <stdio.h>
int main() {
  int x(0), y(0);
  scanf("%d%d", &x, &y);
  printf("%.3f\n", (double)(x * y) / 12.);
  return 0;
}