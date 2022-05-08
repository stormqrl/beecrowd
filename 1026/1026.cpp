/**
 * @file 1026.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main() {
  unsigned long a(0), b(0);
  while (scanf("%lu%lu", &a, &b) != EOF) printf("%lu\n", a ^ b);
  return 0;
}