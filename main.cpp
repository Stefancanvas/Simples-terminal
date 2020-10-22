#include <iostream>
#include "Headers/Mat.h"
#include "Headers/Bin.h"

std::string name = "DEFAULT";

void checkInput(std::string input);
void chName();
void clear();



int main(){
  std::string input;

  bool rodando = true;

  while(rodando){
    std::cout<<std::endl<<name<<": ";
    std::cin>>input;
    checkInput(input);
  }


  return 0;
}

void checkInput(std::string input){
  std::string comandos[] = {"help", "name","clear","inttobin",
                            "bintoint","soma","div","mult",
                            "sub","bswi","iswi", "i&", "b&", "ihex",
                            "hexi"
                          };
  std::string help[] = {"help     - Mostra os comandos na tela",
                        "name     - Muda o seu nome de usuario. Ex: name Will Smith",
                        "clear    - Limpa o conteudo da tela",
                        "inttobin - Converte um numero em decimal para binario",
                        "bintoint - Converte binario para um numero inteiro",
                        "soma     - Soma dois numeros",
                        "div      - Divide dois numeros",
                        "mult     - Multiplica dois numeros",
                        "sub      - Subtrai dois numeros",
                        "bswi     - Pega um numero em binario e faz um switch.\n"
                        "         Ex.: \"bswi 100 1\" , faz switch do numero 100 1 vez para direita\n"
                        "         bswi 100 2 faz switch 2 vezes para a direita\n"
                        "         bswi 100 -2 faz switch 2 vezes para a esquerda\n"
                        "         O sinal indica se será um switch para a esquerda ou para a direita\n"
                        "         Sendo + para a esquerda e - para a direita",
                        "iswi     - Faz a mesma coisa que o bswi, mas requer e retorna um nmr inteiro",
                        "i&       - Realiza a operação de AND com um numero inteiro\n"
                        "         Requer dois argumentos\n"
                        "         Ex.: \"i& 5 6\" realiza 5&6, retornando 4",
                        "b&       - Realiza a operação AND com um numero em binario\n"
                        "         Requer dois argumentos\n"
                        "         Ex.:\"b& 101 110\" realiza 101&110, retornando 100\n",
                        "ihex     - Converte uma Int para Hexadecimal\n",
                        "hexi     - Converte um numero em hex para Int\n"
                      };

  int tam = sizeof(comandos)/sizeof(*comandos);
  for(int i = 0; i < tam; i++){
    if(input == comandos[i]){
      switch(i){
        case 0:
	        std::cout<<std::endl;
          for(int j = 0; j <tam;j++){
            std::cout<<help[j]<<std::endl;
          }
          break;
        case 1:
          chName();
          break;
        case 2:
          clear();
          break;
        case 3:{
          int inp;
          std::cin>>inp;
          std::cout<<bin::inttobin(inp);
          break;
        }
        case 4:{
          std::string inp;
          std::cin>>inp;
          std::cout<<bin::bintoint(inp);
          break;
        }
        case 5:
          mat::soma();
          break;
        case 6:
          mat::div();
          break;
        case 7:
          mat::mult();
          break;
        case 8:
          mat::sub();
          break;
        case 9:
          bin::bSwitch();
          break;
        case 10:
          std::cout<<bin::iSwitch();
          break;
        case 11:{
          int inp1,inp2;
          std::cin>>inp1>>inp2;
          std::cout<<bin::iAnd(inp1,inp2);
        }
        break;
        case 12:{
          std::string inp1,inp2;
          std::cin>>inp1>>inp2;
          std::cout<<bin::bAnd(inp1,inp2);
        }
        break;
        case 13:{
          int inp1;
          std::cin>>inp1;
          std::cout<<hex::ihex(inp1);
        }
        break;
        case 14:{
            std::string inp;
            std::cin>>inp;
            std::cout<<hex::hexi(inp);
        }
        break;
        default:
          break;
      }
    }
  }

}

void chName(){
  std::string nName;
  std::cin.ignore();
  getline(std::cin, nName);
  name = nName;
}

void clear(){
  for(int i = 0; i<100;i++){
    std::cout<<"\n\n\n\n\n";
  }
}
