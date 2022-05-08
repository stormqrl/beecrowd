#include <stdio.h>

int main() {
  unsigned long a(0), b(0);
  while (scanf("%lu%lu", &a, &b) != EOF) printf("%lu\n", a ^ b);
  return 0;
}