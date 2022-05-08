/**
 * @file 1025.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

#include <algorithm>
#include <vector>

int main() {
  int a(0), b(0), c(0), e(0);
  while (scanf("%d%d", &a, &b) == 2) {
    if ((a == 0 && b == 0) || (a > 10000 || b > 10000) || (a < 0 || b < 0))
      break;
    std::vector<int> marbles;
    printf("CASE# %d:\n", ++e);
    for (size_t i = 0; i < a; i++) {
      scanf("%d", &c);
      std::vector<int>::const_iterator it =
          std::upper_bound(marbles.cbegin(), marbles.cend(), c);
      if (!((c > 10000) || (c < 0))) marbles.insert(it, c);
    }

    for (size_t i = 0; i < b; i++) {
      scanf("%d", &c);
      if (!((c > 10000) || (c < 0))) {
        std::vector<int>::iterator it =
            std::find(marbles.begin(), marbles.end(), c);
        if (it != marbles.end()) {
          printf("%d found at %d\n", c, std::distance(marbles.begin(), it) + 1);
        } else
          printf("%d not found\n", c);
      }
    }
  }

  return 0;
}