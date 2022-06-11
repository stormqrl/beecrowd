/**
 * @file 1022.cpp
 * @author Oziel Ferreira da Silva
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <string>
using namespace std;

void removeBlanks(string& _str) {
  string _aux;
  for (char _it : _str)
    if (_it != ' ') _aux.push_back(_it);
  _str = _aux;
}

void findIntegers(string& _str, int* args) {
  if (_str.empty()) return;
  int _pos(0);
  string _aux, _out;

  for (int _it = 0; _it < _str.size(); _it++)
    if (_str.at(_it) >= 48 && _str.at(_it) <= 57) {
      _aux.push_back(_str.at(_it));
      if (_it == _str.size() - 1) args[_pos] = atoi(_aux.c_str());
    } else {
      _out.push_back(_str.at(_it));
      args[_pos++] = atoi(_aux.c_str());
      _aux.clear();
    }
  _str = _out;
}

int MDC(int n, int d) {
  if (d == 0)
    return n;
  else
    return MDC(d, n % d);
}

int main() {
  int n1(0), d1(0), n2(0), d2(0), nr(0), dr(0), i(0),
      _values[] = {n1, d1, n2, d2};
  string _in;
  scanf("%d", &i);
  cin.ignore();
  while (i-- > 0) {
    getline(cin, _in);
    removeBlanks(_in);
    findIntegers(_in, _values);

    n1 = _values[0], d1 = _values[1], n2 = _values[2], d2 = _values[3];

    printf(
        "%d/%d = ",
        (_in.find('+') != -1
             ? nr = (n1 * d2 + n2 * d1)
             : (_in.find('-') != -1
                    ? nr = (n1 * d2 - n2 * d1)
                    : (_in.find('*') != -1 ? nr = (n1 * n2) : nr = (n1 * d2)))),
        (_in.find('+') != -1 || _in.find('-') != -1 || _in.find('*') != -1
             ? dr = (d1 * d2)
             : dr = (n2 * d1)));
    printf("%d/%d\n",
           (dr / MDC(nr, dr) > 0 ? nr / MDC(nr, dr) : nr / MDC(nr, dr) * -1),
           (dr / MDC(nr, dr) > 0 ? dr / MDC(nr, dr) : dr / MDC(nr, dr) * -1));
  }
  return 0;
}