#include <stdio.h>
int main() {
  int x(0), _it[] = {100, 50, 20, 10, 5, 2, 1};
  scanf("%d", &x);
  printf("%d\n", x);

  for (int i : _it) {
    printf("%d nota(s) de R$ %d,00\n", x / i, i);
    x %= i;
  }
  
  return 0;
}