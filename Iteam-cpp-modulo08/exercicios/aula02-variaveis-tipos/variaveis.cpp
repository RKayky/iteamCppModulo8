#include <iostream>
using namespace std;

int main() {
    // Tipos primitivos
    int idade = 20;
    double salario = 3500.75;
    char inicial = 'K';
    bool ativo = true;
    string nome = "ITEAM";

    // Constante
    const double PI = 3.14159;

    // Operadores aritmeticos
    int a = 10, b = 3;
    int soma        = a + b;
    int subtracao   = a - b;
    int produto     = a * b;
    int divisao     = a / b;
    int resto       = a % b;

    // Operadores relacionais e logicos
    bool maiorDeIdade = idade >= 18;
    bool acessoAtivo  = maiorDeIdade && ativo;

    cout << "=== Aula 02 — Variaveis e Tipos ===" << endl;
    cout << "Nome:    " << nome    << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Idade:   " << idade   << endl;
    cout << "Salario: " << salario << endl;
    cout << "Ativo:   " << ativo   << endl;
    cout << "PI:      " << PI      << endl;

    cout << "\n=== Operadores Aritmeticos ===" << endl;
    cout << a << " + " << b << " = " << soma       << endl;
    cout << a << " - " << b << " = " << subtracao  << endl;
    cout << a << " * " << b << " = " << produto    << endl;
    cout << a << " / " << b << " = " << divisao    << endl;
    cout << a << " % " << b << " = " << resto      << endl;

    cout << "\n=== Operadores Logicos ===" << endl;
    cout << "Maior de idade? " << maiorDeIdade << endl;
    cout << "Acesso ativo?   " << acessoAtivo  << endl;

    return 0;
}
