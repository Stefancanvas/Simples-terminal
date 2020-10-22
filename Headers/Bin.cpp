#include "Bin.h"
#include <algorithm>


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

namespace hex{
//TODO:
// [ ] - Int to hex -> (ihex)

    std::string ihex(int inp){
        std::vector<int> restos;
        std::string out;
        int inp_ = inp;
        while(inp_ != 0){
            int temp = inp_ % 16;

            restos.push_back(temp);
            inp_ = inp_ / 16;
        }
        restos.push_back(inp_);

        for(int i = restos.size(); i>=0; i--){
            if(restos[i] >= 0 && restos[i] <= 9){
                out += std::to_string(restos[i]);
            }
            else{
                if(restos[i] == 10){ out += "A";}
                else if(restos[i] == 11){ out += "B";}
                else if(restos[i] == 12){ out += "C";}
                else if(restos[i] == 13){ out += "D";}
                else if(restos[i] == 14){ out += "E";}
                else if(restos[i] == 15){ out += "F";}
            }
        }
        return out;

    }

    int hexi(std::string inp){
        int out = 0;
        std::reverse(inp.begin(), inp.end());
        for(int i = 0; i<inp.length(); i++){
            switch(inp[i]){
                case 'A': case 'a':
                    out+=10*(pow(16,i));
                    break;
                case 'B': case 'b':
                    out+=11*(pow(16,i));
                    break;
                case 'C': case 'c':
                    out+=12*(pow(16,i));
                    break;
                case 'D': case 'd':
                    out+=13*(pow(16,i));
                    break;
                case 'E': case 'e':
                    out+=13*(pow(16,i));
                    break;
                case 'F': case 'f':
                    out+=14*(pow(16,i));
                    break;
                default:
                    out+=(inp[i] - '0')*pow(16,i);
                    break;

            }
        }

        return out;
    }

}
