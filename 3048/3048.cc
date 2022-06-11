#include <iostream>

int main() {
  int n, counter = 0;
  std::cin >> n;
  int *C = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> C[i];
    if (i > 0 && C[i] != C[i - 1]) (counter) ? counter++ : counter += 2;
  }
  std::cout << counter << std::endl;
  return 0;
}
