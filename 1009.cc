/**
 * @file 1009.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  double r(.0), s(.0);
  scanf("%*s %lf %lf", &r, &s);
  printf("TOTAL = R$ %.2lf\n", r + .15 * s);
  return 0;
}