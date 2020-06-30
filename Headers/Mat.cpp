#include "Mat.h"

#include <iostream>

namespace mat{
  void sum(){
    int n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1+n2;
  }
  void div(){
    int n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1/n2;
  }
  void mult(){
    int n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1*n2;
  }
  void sub(){
    int n1,n2;
    std::cin>>n1>>n2;
    std::cout<<n1-n2;
  }
}
