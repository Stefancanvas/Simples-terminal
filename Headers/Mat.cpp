#include "Mat.h"

#include <iostream>

namespace mat{
  void soma(){
    double n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1+n2;
  }
  void div(){
    double n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1/n2;
  }
  void mult(){
    double n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1*n2;
  }
  void sub(){
    double n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1-n2;
  }
}
