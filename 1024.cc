/**
 * @file 1024.cpp
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

string _1024(string _str) {
  string _aux_str;
  size_t sz = (_str.size() % 2 == 0 ? _str.size() / 2 : (_str.size() + 1) / 2),
         it(0);
  for (char _c : _str)
    _aux_str.insert(_aux_str.begin(),
                    (it < sz ? ((_c > 64 && _c < 123) ? _c + 2 : _c - 1)
                             : ((_c > 64 && _c < 123) ? _c + 3 : _c))),
        it++;
  return _aux_str;
}

int main() {
  int i(0);
  string test;
  cin >> i;
  cin.ignore();
  for (int j = 0; j < i; j++) {
    getline(cin, test);
    cout << _1024(test) << endl;
  }

  return 0;
}