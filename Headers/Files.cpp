#include "Files.h"
#include <iostream>
#include <fstream>
#include <vector>

namespace Files{
    void criarArq(std::string nome){
        std::ofstream arq;
        arq.open(nome);
        std::string a; std::vector<std::string> todasPals;
        while(a!="EXIT;"){
            getline(std::cin, a);
            if(a!="EXIT;"){
                todasPals.push_back(a);
            }
        }

        for(int i = 1; i<todasPals.size(); i++){
            arq<<todasPals[i]<<"\n";
        }

        arq.close();

    }

    void read(std::string nome){
        std::ifstream arq;
        arq.open(nome);
        std::string linha;

        while(getline(arq,linha)){
            std::cout<<linha<<"\n";
        }
        arq.close();
    }

}
