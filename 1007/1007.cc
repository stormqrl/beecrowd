/**
 * @file 1007.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int w(0), x(0), y(0), z(0);
  scanf("%d%d%d%d", &w, &x, &y, &z);
  printf("DIFERENCA = %d\n", w * x - y * z);
  return 0;
}