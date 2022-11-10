#include <iostream>
int main() {
  int space = 1;
  for (int i = 4; i >= -4; i--) {
    for (int j = 0; j < std::abs(i) + 3; j++) std::cout << " ";
    std::cout << char('E' - std::abs(i));

    if (char('E' - std::abs(i)) != 'A') {
      for (int i = 0; i < space; i++) std::cout << " ";
      (i > 0) ? space += 2 : space -= 2;
      std::cout << char('E' - std::abs(i));
    }
    std::cout << std::endl;
  }

  return 0;
}