#include <iostream>

int main() {
  int n, r1, r2;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> r1 >> r2;
    std::cout << r1 + r2 << std::endl;
  }

  return 0;
}