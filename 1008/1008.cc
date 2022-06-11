/**
 * @file 1008.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int x(0), y(0);
  double z(.0);
  scanf("%d%d%lf", &x, &y, &z);
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", x, z * y);
  return 0;
}