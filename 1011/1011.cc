/**
 * @file 1011.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  double x(.0);
  scanf("%lf", &x);
  printf("VOLUME = %.3f\n", (4. / 3.) * 3.14159 * x * x * x);
  return 0;
}