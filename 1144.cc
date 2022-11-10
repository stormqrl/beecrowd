#include <iostream>
int main() {
  int n;
  while (std::cin >> n) {
    for (int i = 1; i <= n; i++) {
      std::cout << i << " " << i * i << " " << i * i * i << std::endl
                << i << " " << i * i + 1 << " " << i * i * i + 1 << std::endl;
    }
  }
  return 0;
}