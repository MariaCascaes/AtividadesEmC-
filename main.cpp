#include <iostream> //substitui <stdio.h> para entrada e saída
#include <cstdlib> //substitui <stdlib.h> para std::system

//funcao principal do programa (padrão c++) 
int main() {

    //imprime na tela usando std::cout
std::cout << "Oi mundo!";

//Pausa o programa apos executar
//adicionamos uma quebra de linha para a mensagem " pause" não ficar colada
std::cout << "\n";
std::system("pause");//Em C++ É boa prática usar std::system

return 0;//int main() deve retornar 0
}