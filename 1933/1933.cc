#include <iostream>

int main() {
  int a, b;
  while (std::cin >> a >> b)
    (a > b) ? std::cout << a << std::endl : std::cout << b << std::endl;
  return 0;
}