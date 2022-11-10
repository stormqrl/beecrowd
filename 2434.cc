#include <iostream>

int main() {
  int a, b, c, min;
  while (std::cin >> a >> b) {
    min = b;
    for (int i = 0; i < a; i++) {
      std::cin >> c;
      b += c;
      if (b < min) min = b;
    }
    std::cout << min << std::endl;
  }
  return 0;
}