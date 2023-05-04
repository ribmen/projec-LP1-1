#include <iostream>
#include <vector>
#include <random>
#include <unistd.h> 

using namespace std;

int main() {
    vector<int> vec1;

    for(int i = 0; i < 100; i++){
        vec1.push_back(i);
    }

    // Inicializa o gerador de números aleatórios com um seed; realizado com pesquisa
    random_device rd;
    mt19937 gerador(rd());

    // Sorteia um índice aleatório dentro do tamanho do vetor
    uniform_int_distribution<int> distribuicao(0, vec1.size() - 1);
    int indice = distribuicao(gerador);

    // Exibe o valor sorteado
    cout << "Bem-vindo à fila de espera do HBV! Esta é a sua posição: " << vec1[indice] << endl;
    sleep(3);

    for(int i = vec1[indice] - 1; i >= 0; i--){ //gostaria de combinar isso com elementos sendo removidos do início do vetor
        cout << "Sua posição atual é: " << i << endl;
        sleep(1);
    }

    cout << "É a sua vez!";

    return 0;
}
