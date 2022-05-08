/**
 * @file 1014.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int x(0);
  double y(.0);
  scanf("%d%lf", &x, &y);
  printf("%.3f km/l\n", (double)x / y);
  return 0;
}