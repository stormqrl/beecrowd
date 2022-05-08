#include <stdio.h>
int main() {
  int x(0), y(0);
  double z(.0);
  scanf("%d%d%lf", &x, &y, &z);
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", x, z * y);
  return 0;
}