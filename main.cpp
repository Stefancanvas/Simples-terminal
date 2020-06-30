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
                            "bintoint","soma","div","mult","sub"};
  std::string help[] = {"Mostra os comandos na tela", "Muda o seu nome de usuario. Ex: name Will Smith",
                        "Limpa o conteudo da tela","Converte um numero em decimal para binario",
                        "Converte binario para um numero inteiro",
                        "Soma dois numeros","Divide dois numeros","Multiplica dois numeros",
                        "Subtrai dois numeros"};

  int tam = sizeof(comandos)/sizeof(*comandos);
  for(int i = 0; i < tam; i++){
    if(input == comandos[i]){
      switch(i){
        case 0:
	  std::cout<<std::endl;
          for(int j = 0; j <tam;j++){
            std::cout<<comandos[j]<<" - "<<help[j]<<std::endl;
          }
          break;
        case 1:
          chName();
          break;
        case 2:
          clear();
          break;
        case 3:
          bin::inttobin();
          break;
        case 4:
        {
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
