#include <iostream>

int main() {
  int n, bound[] = {300, 1500, 600, 1000, 150}, total = 225;
  for (int i = 0; i < 5; i++) {
    std::cin >> n;
    total += n * bound[i];
  }
  std::cout << total << std::endl;
  return 0;
}
