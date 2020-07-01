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

    std::string inttobin(int inp){
    int bit;
    std::string out;
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
        out+="1";
      else
        out+="0";
    }
    return out;
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
    std::cout<<inttobin(out);
  }

  int iSwitch(){
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
  return out;

  }

  int iAnd(int inp1, int inp2){
    int out;
    out = inp1&inp2;
    return out;
  }

  std::string bAnd(std::string inp1, std::string inp2){
    int c1,c2,out;
    c1 = bintoint(inp1);
    c2 = bintoint(inp2);
    out = c1&c2;
    return inttobin(out);
  }

}
