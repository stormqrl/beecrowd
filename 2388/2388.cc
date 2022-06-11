#include <iostream>

int main() {
  int n, v, t, total = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> v >> t;
    total += v * t;
  }
  std::cout << total << std::endl;
  return 0;
}
