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

    void inttobin(){
    int inp;
    int bit;
    std::cin>>inp;
    if(inp <= 15 && inp>0)
      bit = 4;
    else if(inp <= 255 && inp > 15)
      bit = 8;
    else if(inp <= 65535 && inp > 255)
      bit = 16;
    else if(inp < 0){
      bit = 16;
    }

    for(int i = bit -1; i>=0;i--){
      if(inp & (1<<i))
        std::cout << "1";
      else
        std::cout<< "0";
    }
    std::cout<<std::endl;
  }

}
