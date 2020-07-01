#pragma once
#include <cmath>
#include <iostream>

namespace bin{
  int bintoint(std::string inp);
  std::string inttobin(int inp);
  void bSwitch();
  int iSwitch();
  int iAnd(int inp1, int inp2);
  std::string bAnd(std::string inp1, std::string inp2);
}
