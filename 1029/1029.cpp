/**
 * @file 1029.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

unsigned fib(unsigned n, int &calls) {
  calls++;
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1, calls) + fib(n - 2, calls);
}

int main(int argc, char const *argv[]) {
  int a(0), c(0);
  unsigned b(0), d(0);
  scanf("%d", &a);
  while (a-- > 0) {
    scanf("%u", &b);
    if (b > 0U && b < 40U) {
      c = -1, d = fib(b, c);
      printf("fib(%u) = %d calls = %u\n", b, c, d);
    }
  }
  return 0;
}
