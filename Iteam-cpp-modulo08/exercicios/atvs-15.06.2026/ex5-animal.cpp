// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao: Classe Animal
// ===============================================================

#include <iostream>
using namespace std;

class Animal {
private:
    string especie;
    string som;

public:
    Animal(string especie, string som) {
        this->especie = especie;
        this->som     = som;
    }

    void emitir_som() {
        cout << especie << " faz: " << som << endl;
    }
};

int main() {
    Animal a1("Cachorro", "Au Au!");
    Animal a2("Gato",     "Miau!");
    Animal a3("Vaca",     "Muu!");

    a1.emitir_som();
    a2.emitir_som();
    a3.emitir_som();

    return 0;
}
