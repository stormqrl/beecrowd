#include <iostream>

int main() {
  int a, b;
  while (std::cin >> a >> b) std::cout << b * 2 - a << std::endl;
  return 0;
}