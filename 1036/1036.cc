#include <cmath>
#include <iostream>

int main() {
  double *x = new double[3], delta(.0);
  while (std::cin >> x[0] >> x[1] >> x[2]) {
    delta = (x[1] * x[1]) - (4. * x[0] * x[2]);
    if (delta <= 0. || x[0] == 0.)
      std::cout << "Impossivel calcular" << std::endl;
    else {
      std::cout << std::fixed;
      std::cout.precision(5);
      std::cout << "R1 = " << ((-x[1] + sqrt(delta)) / (2. * x[0])) << std::endl
                << "R2 = " << ((-x[1] - sqrt(delta)) / (2. * x[0]))
                << std::endl;
    }
  }

  delete[] x;
  return 0;
}