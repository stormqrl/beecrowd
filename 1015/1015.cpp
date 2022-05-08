#include <stdio.h>
int main() {
  double a(.0), b(.0), c(.0), d(.0), _temp(.0), _sqrt(.0);
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

  _sqrt = ((a - c) * (a - c) + (b - d) * (b - d)) / 2.;
  while (_sqrt != _temp)
    _temp = _sqrt,
    _sqrt = (((a - c) * (a - c) + (b - d) * (b - d)) / _temp + _temp) / 2.;

  printf("%.4f\n", _sqrt);
  return 0;
}