#include <stdio.h>
int main() {
  int a(0), b(0), c(0);
  scanf("%d%d%d", &a, &b, &c);
  printf("%d eh o maior\n",
         (a > b ? (a > c ? a : (b > c ? b : c)) : (b > c ? b : c)));
  return 0;
}