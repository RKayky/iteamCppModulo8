// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 1: Classe Pessoa
// ===============================================================

#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    Pessoa(string nome, int idade) {
        this->nome  = nome;
        this->idade = idade;
    }

    void exibir() {
        cout << "Nome: "  << nome  << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }
};

int main() {
    Pessoa p1("Kelvin Araujo", 24);
    Pessoa p2("Gabriel Farias", 26);

    p1.exibir();
    cout << endl;
    p2.exibir();

    return 0;
}
