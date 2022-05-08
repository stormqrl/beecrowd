/**
 * @file 1019.cpp
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
  printf("%d:%d:%d\n", x / 3600, (x % 3600) / 60, ((x % 3600) % 60));
  return 0;
}