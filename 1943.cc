#include <iostream>
int main() {
  int val[] = {1, 3, 5, 10, 25, 50, 100}, value;
  while (std::cin >> value) {
    int i = 0;
    while (value > val[i]) i++;
    std::cout << "Top " << val[i] << std::endl;
  }
}