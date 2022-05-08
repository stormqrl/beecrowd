/**
 * @file 1028.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int MDC(int n, int d) {
  if (d == 0)
    return n;
  else
    return MDC(d, n % d);
}

int main(int argc, char const *argv[]) {
  int a(0), b(0), c(0);
  scanf("%d", &a);
  while (a-- > 0) {
    scanf("%d%d", &b, &c);
    printf("%d\n", MDC(b, c));
  }
  return 0;
}
