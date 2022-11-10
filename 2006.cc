#include <iostream>

int main() {
  size_t n = 0, counter = 0;
  std::cin >> n;
  size_t T[5] = {0};
  for (size_t i = 0; i < 5; i++) {
    std::cin >> T[i];
    if (T[i] == n) counter++;
  }
  std::cout << counter << std::endl;

  return 0;
}