/**
 * @file 1006.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  double r(.0), s(.0), t(.0);
  scanf("%lf%lf%lf", &r, &s, &t);
  printf("MEDIA = %.1lf\n", (2. * r + 3. * s + 5. * t) / 10.);
  return 0;
}