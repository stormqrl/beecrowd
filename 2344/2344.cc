#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  std::cout << ((n == 0)    ? 'E'
                : (n <= 35) ? 'D'
                : (n <= 60) ? 'C'
                : (n <= 85) ? 'B'
                            : 'A')
            << std::endl;
  return 0;
}
