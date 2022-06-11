#include <cmath>
#include <iostream>

int main() {
  double a, b, c, d, r1, r2;
  while (std::cin >> r1 >> a >> b >> r2 >> c >> d) {
    (sqrt((a - c) * (a - c) + (b - d) * (b - d)) + r2 <= r1)
        ? std::cout << "RICO" << std::endl
        : std::cout << "MORTO" << std::endl;
  }

  return 0;
}