#include <stdio.h>
int main() {
  double x(.0);
  scanf("%lf", &x);
  printf("VOLUME = %.3f\n", (4. / 3.) * 3.14159 * x * x * x);
  return 0;
}