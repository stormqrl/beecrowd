/**
 * @file 1020.cpp
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
  scanf("%d", &x);
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", x / 365, (x % 365) / 30,
         (x % 365) % 30);
  return 0;
}