// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 2: Classe Cachorro
// ===============================================================

#include <iostream>
using namespace std;

class Cachorro {
private:
    string nome;
    string raca;

public:
    Cachorro(string nome, string raca) {
        this->nome = nome;
        this->raca = raca;
    }

    void latir() {
        cout << "Au Au! O cachorro " << nome << " esta latindo." << endl;
    }
};

int main() {
    Cachorro c1("Marley", "Pastor Alemao");
    Cachorro c2("Lilow", "Labrador");

    c1.latir();
    c2.latir();

    return 0;
}
