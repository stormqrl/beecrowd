#include <iostream>

int fact(int n = 1) {
  if (n == 1) return n;
  return n * fact(n - 1);
}

int main() {
  int n = 0;
  std::cin >> n;
  std::cout << fact(n) << std::endl;
  return 0;
}
