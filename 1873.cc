#include <iostream>
int main() {
  int n;
  std::string a, b;
  while (std::cin >> n) {
    for (int i = 0; i < n; i++) {
      std::cin >> a >> b;
      if (a == b)
        std::cout << "empate" << std::endl;
      else if ((a == "pedra" && (b == "tesoura" || b == "lagarto")) ||
               ((a == "spock") && (b == "tesoura" || b == "pedra")) ||
               ((a == "papel") && (b == "spock" || b == "pedra")) ||
               ((a == "lagarto") && (b == "spock" || b == "papel")) ||
               ((a == "tesoura") && (b == "papel" || b == "lagarto")))
        std::cout << "rajesh" << std::endl;
      else
        std::cout << "sheldon" << std::endl;
    }
  }
  return 0;
}