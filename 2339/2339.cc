#include <iostream>
int main() {
  int a, b, c;
  while (std::cin >> a >> b >> c)
    std::cout << ((b >= a * c) ? 'S' : 'N') << std::endl;
  return 0;
}