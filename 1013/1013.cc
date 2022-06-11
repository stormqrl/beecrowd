/**
 * @file 1013.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int a(0), b(0), c(0);
  scanf("%d%d%d", &a, &b, &c);
  printf("%d eh o maior\n",
         (a > b ? (a > c ? a : (b > c ? b : c)) : (b > c ? b : c)));
  return 0;
}