// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 3: Classe Aluno
// ===============================================================

#include <iostream>
using namespace std;

class Aluno {
private:
    string nome;
    double nota1;
    double nota2;

public:
    Aluno(string nome, double nota1, double nota2) {
        this->nome  = nome;
        this->nota1 = nota1;
        this->nota2 = nota2;
    }

    double calcularMedia() {
        return (nota1 + nota2) / 2.0;
    }

    void exibirResultado() {
        double media = calcularMedia();
        cout << "Aluno: " << nome << endl;
        cout << "Media: " << media << endl;
        if (media >= 7) {
            cout << "Situacao: Aprovado" << endl;
        } else {
            cout << "Situacao: Reprovado" << endl;
        }
    }
};

int main() {
    Aluno a1("Kelvin Araujo", 8.0, 9.0);
    Aluno a2("Gabriel Farias", 5.0, 6.0);

    a1.exibirResultado();
    cout << endl;
    a2.exibirResultado();

    return 0;
}
