#include <iostream>
using namespace std;

int main() {
    // --- if / else: sistema de aprovacao ---
    double nota1, nota2;
    cout << "=== Sistema de Aprovacao ===" << endl;
    cout << "Digite a nota 1: "; cin >> nota1;
    cout << "Digite a nota 2: "; cin >> nota2;

    double media = (nota1 + nota2) / 2.0;
    cout << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Resultado: APROVADO" << endl;
    } else if (media >= 5.0) {
        cout << "Resultado: RECUPERACAO" << endl;
    } else {
        cout << "Resultado: REPROVADO" << endl;
    }

    // --- switch: dia da semana ---
    int dia;
    cout << "\n=== Dia da Semana ===" << endl;
    cout << "Digite um numero (1-7): "; cin >> dia;

    switch (dia) {
        case 1: cout << "Domingo"      << endl; break;
        case 2: cout << "Segunda-feira" << endl; break;
        case 3: cout << "Terca-feira"  << endl; break;
        case 4: cout << "Quarta-feira" << endl; break;
        case 5: cout << "Quinta-feira" << endl; break;
        case 6: cout << "Sexta-feira"  << endl; break;
        case 7: cout << "Sabado"       << endl; break;
        default: cout << "Numero invalido!" << endl;
    }

    // --- operador ternario ---
    int idade;
    cout << "\n=== Operador Ternario ===" << endl;
    cout << "Digite sua idade: "; cin >> idade;
    string status = (idade >= 18) ? "maior de idade" : "menor de idade";
    cout << "Voce e " << status << "." << endl;

    return 0;
}
