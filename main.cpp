#include <iostream>
#include "Headers/Mat.h"

std::string name = "DEFAULT";

void checkInput(std::string input);
void chName();
void clear();
void dectobi();



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
  std::string comandos[] = {"help", "name","clear","dectobi","sum","div","mult","sub"};
  std::string help[] = {"Mostra os comandos na tela", "Muda o seu nome de usuario. Ex: name Will Smith",
   "Limpa o conteudo da tela","Converte um numero em decimal para binario",
   "Soma dois numeros","Divide dois numeros","Multiplica dois numeros",
   "Subtrai dois numeros"};

  int tam = sizeof(comandos)/sizeof(*comandos);
  for(int i = 0; i < tam; i++){
    if(input == comandos[i]){
      switch(i){
        case 0:
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
          dectobi();
          break;
        case 4:
          mat::sum();
          break;
        case  5:
          mat::div();
          break;
        case 6:
          mat::mult();
          break;
        case 7:
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
  getline(std::cin, nName);
  name = nName;
}

void clear(){
  for(int i = 0; i<100;i++){
    std::cout<<"\n\n\n\n\n";
  }
}

void dectobi(){
  int inp;
  int bit;
  std::cin>>inp;
  if(inp <= 15)
    bit = 4;
  else if(inp <= 255 && inp > 15)
    bit = 8;
  else if(inp <= 65535 && inp > 255)
    bit = 16;

  for(int i = bit -1; i>=0;i--){
    if(inp & (1<<i))
      std::cout << "1";
    else
      std::cout<< "0";
  }
  std::cout<<std::endl;

}
