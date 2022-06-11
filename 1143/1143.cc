#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++)
    std::cout << i << " " << i * i << " " << i * i * i << std::endl;
  return 0;
}
