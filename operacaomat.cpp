#include <iostream>
#include <iomanip>
#include <string>

using namspace std;

int main() 
{
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade= 16;
    salrio = 5,000;
    altura = 1,55;
    genero = "F";
    nome = "Maria Eduarda Cascaes Vital";

    cout << fixed << setprecision(2);
    cout << "IDADE: " << idade << endl;
    cout << "SALARIO: " << salario << endl;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl;
    cout << "NOME: " << nome << endl;

    return 0;
    
    }