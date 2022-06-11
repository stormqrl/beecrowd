#include <iostream>

int main() {
  int p1, p2, c1, c2;
  while (std::cin >> p1 >> c1 >> p2 >> c2)
    std::cout << ((p1 * c1 - p2 * c2 == 0)
                      ? 0
                      : -(p1 * c1 - p2 * c2) / std::abs(p1 * c1 - p2 * c2))
              << std::endl;

  return 0;
}