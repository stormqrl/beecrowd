#include <stdio.h>

#include <map>
using namespace std;

double trunc2(double _v) { return (int)(_v * 1e2) / 1e2; }

int main() {
  unsigned _entry(0), _iterator(0), dataFirst(0), dataSecond(0);
  while (scanf("%d", &_entry)) {
    if (_entry == 0) break;
    if (_iterator > 0) printf("\n\n");

    _iterator++;
    _entry *= 2;
    map<int, int> _data;
    double _x(.0), _y(.0);

    printf("Cidade# %d:\n", _iterator);

    for (unsigned i = 0; i < _entry; i++)
      if (i % 2 == 0) {
        scanf("%d", &dataFirst);
        _x += dataFirst;
      } else {
        scanf("%d", &dataSecond);
        _y += dataSecond;

        if (_data.find(dataSecond / dataFirst) != _data.end())
          _data.find(dataSecond / dataFirst)->second += dataFirst;
        else
          _data.insert(pair<int, int>(dataSecond / dataFirst, dataFirst));
      }

    for (map<int, int>::iterator it = _data.begin(); it != _data.end(); it++) {
      printf("%d-%d ", it->second, it->first);
    }
    printf("\nConsumo medio: %.2f m3.", trunc2(_y / _x));
  }
  return 0;
}