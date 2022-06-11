#include <iostream>

int main() {
  bool cup;
  for (int i = 0; i < 4; i++) {
    std::cin >> cup;
    if (cup) std::cout << (i + 1) << std::endl;
  }

  return 0;
}