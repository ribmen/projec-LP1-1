#include <iostream>
#include <vector>
#include <string>

int main() {
    // Criando um vetor de strings vazio
    std::vector<string> vec;

    // Adicionando elementos ao vetor
    string x;
    std::cout << "Welcome to the Enter a name: ";
    std::cin >> x;
    vec.push_back(x);
    vec.push_back("Carlo");
    vec.push_back("The Strokes");

    // Acessando elementos do vetor
    std::cout << vec[0] << std::endl; // imprime "10"
    std::cout << vec[1] << std::endl; // imprime "20"
    std::cout << vec[2] << std::endl; // imprime "30"

    // Alterando elementos do vetor
    vec[0] = "Victor";
    vec[1] = "Lucas";
    vec[2] = "Pedri";

    // Acessando elementos do vetor usando um iterador
    std::vector<string>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl; // imprime "100 200 300"

    // Obtendo o tamanho do vetor
    std::cout << "O tamanho do vetor é: " << vec.size() << std::endl; // imprime "O tamanho do vetor é: 3"

    // Removendo um elemento do vetor
    vec.pop_back();

    // Obtendo o tamanho atualizado do vetor
    std::cout << "O tamanho do vetor agora é: " << vec.size() << std::endl; // imprime "O tamanho do vetor agora é: 2"

    return 0;
}
