/**
 * @file 1021.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int _it(0);
  double x(.0), _notas[] = {100., 50., 20., 10., 5., 2.},
                _moedas[] = {1., .50, .25, .10, .05, .01};

  scanf("%lf", &x);

  printf("NOTAS:\n");
  for (int _pos = 0; _pos < 6; _pos++) {
    while (x >= _notas[_pos]) {
      x -= _notas[_pos];
      _it++;
    }
    printf("%d nota(s) de R$ %.2f\n", _it, _notas[_pos]);
    _it = 0;
  }

  printf("MOEDAS:\n");
  for (int _pos = 0; _pos < 6; _pos++) {
    while (x >= _moedas[_pos]) {
      x -= _moedas[_pos];
      _it++;
    }
    if (_pos == 5 && x >= .009999) _it++, x = .0;
    printf("%d moeda(s) de R$ %.2f\n", _it, _moedas[_pos]);
    _it = 0;
  }

  return 0;
}