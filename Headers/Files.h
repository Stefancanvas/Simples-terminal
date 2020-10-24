#pragma once
#include <iostream>


namespace Files{
  void criarArq(std::string nome);
  void read(std::string nome);
}

namespace Str{
  std::string reverse(std::string inp); //reverte
  std::string remove(char ch, std::string inp); //remove todos os char da string inp
}
