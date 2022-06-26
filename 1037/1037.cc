#include <iostream>
using namespace std;

int main() {
  double x(.0);
  while (cin >> x) {
    (x < .0)     ? cout << "Fora de intervalo"
    : (x <= 25)  ? cout << "Intervalo [0,25]"
    : (x <= 50)  ? cout << "Intervalo (25,50]"
    : (x <= 75)  ? cout << "Intervalo (50,75]"
    : (x <= 100) ? cout << "Intervalo (75,100]"
                 : cout << "Fora de intervalo";
    cout << endl;
  }
}