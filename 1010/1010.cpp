/**
 * @file 1010.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int a(0);
  double value1(.0), value2(.0);
  scanf("%*d%d%lf", &a, &value1), value1 *= a;
  scanf("%*d%d%lf", &a, &value2), value2 *= a;
  printf("VALOR A PAGAR: R$ %.2lf\n", value1 + value2);
  return 0;
}