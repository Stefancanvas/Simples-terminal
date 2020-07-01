#include "Bin.h"


namespace bin{
    int bintoint(std::string inp){
      int out= 0;
      int tam = inp.length();
      for(int i = tam; i>=0;i--){
        if(inp[i] == '1'){
          out += pow(2,tam-i-1);
        }
      }
      return out;
    }

    void inttobin(int inp){
    int bit;
    if(inp <= 15 && inp>0)
      bit = 4;
    else if(inp <= 255 && inp > 15)
      bit = 8;
    else if(inp <= 65535 && inp > 255)
      bit = 16;
    else if(inp < 0){
      bit = 16;
    }
    else{
      bit = 200;
    }

    for(int i = bit -1; i>=0;i--){
      if(inp & (1<<i))
        std::cout << "1";
      else
        std::cout<< "0";
    }
    std::cout<<std::endl;
  }

  void bSwitch(){
    int out,nmr,sinal;
    std::string inp;
    std::cin>>inp>>sinal;
    nmr = bintoint(inp);
    if (sinal > 0)
      out = nmr<<sinal;
    else if(sinal < 0){
      sinal *= -1;
      out = nmr>>sinal;
    }
    else
      out = nmr;
    inttobin(out);
  }

  void iSwitch(){
    int inp,out,sinal;
    std::cin>>inp>>sinal;
    if(sinal > 0)
      out = inp<<sinal;
    else if(sinal < 0){
      sinal *= -1;
      out = inp>>sinal;
    }
    else
      out = inp;
    std::cout<<out;

  }

}
