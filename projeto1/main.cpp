//SISTEMA GERENCIADOR DE PEDIDOS DE UMA LANCHONETE
#include <iostream>
#include <string>
#include "functions.hpp"

void sanduicheList(int options);
void sucoList(int options);

int main(int argc, char* argv[]) {
    std::string user = argv[1];
    int options;
    std::string

    if (user == "admin"){
        while(true){
            std::cout << "Escolha a sua ação: " << std::endl;
            std::cout << "1. Listar todos os sanduíches cadastrados" << std::endl;
            std::cout << "2. Listar todos os sucos cadastrados" << std::endl;
            std::cout << "3. Adicionar um novo sanduíche" << std::endl;
            std::cout << "4. Adicionar um novo suco" << std::endl;
            std::cout << "5. Alterar o preço de um sanduíche" << std::endl;
            std::cout << "6. Alterar o preço de um suco" << std::endl;
            std::cout << "7. Excluir um sanduíche" << std::endl;
            std::cout << "8. Excluir um suco" << std::endl;
            std:: cin >> options;
    }
    if(options == 1) sanduichesList(options);
    else if(options == 2) sucoList(options);
    else if(options == 3) addSanduiche(options);
    else if(options == 4) addSuco(options);
    else if(options == 5)
    else if(options == 6)
    else if(options == 7)
    else if(options == 8)

    }
    if (user == "cliente"){
        while(true){
            std::cout << "Escolha a sua ação: " << std::endl;
            std::cout << "1. Listar todos os sanduíches cadastrados" << std::endl;
            std::cout << "2. Listar todos os sucos cadastrados" << std::endl;
            std::cout << "3. Escolher lanche (sanduíche + suco) e guardar em um elemento STL" << std::endl;
            std::cout << "4. Calcular o valor do lanche (todos os elementos salvos no carrinho)" << std::endl;
            std::cout << "5. Ver elemento do carrinho (lanche escolhido)" << std::endl;
            std::cout << "6. Excluir um elemento do carrinho" << std::endl;
            std:: cin >> options;
    }
    if(options == 1) sanduichesList(options);
    else if(options == 2) sucoList(options);
    else if(options == 3) 
    else if(options == 4)
    else if(options == 5)
    else if(options == 6)
    }



    return 0;
}