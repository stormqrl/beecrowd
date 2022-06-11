#include <iostream>

int main() {
  int n, p, q;
  double prices[] = {1.5, 2.5, 3.5, 4.5, 5.5}, amount;

  while (std::cin >> n) {
    amount = 0;
    for (int i = 0; i < n; i++) {
      std::cin >> p >> q;
      amount += prices[p - 1001] * q;
    }
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << amount << std::endl;
  }

  return 0;
}