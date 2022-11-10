#include <iostream>

int main() {
  int *x = new int[4];
  while (std::cin >> x[0] >> x[1] >> x[2] >> x[3])
    (x[1] > x[2] && x[3] > x[0] && x[2] + x[3] > x[0] + x[1] && x[2] >= 0 &&
     x[3] >= 0 && x[0] % 2 == 0)
        ? std::cout << "Valores aceitos" << std::endl
        : std::cout << "Valores nao aceitos" << std::endl;

  delete[] x;
  return 0;
}