// ===============================================================
// Aula: 17/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 1: Heranca — Veiculo e Carro
// ===============================================================

#include <iostream>
using namespace std;

class Veiculo {
public:
    string marca;

    Veiculo(string marca) {
        this->marca = marca;
    }

    void exibir() {
        cout << "Marca: " << marca << endl;
    }
};

class Carro : public Veiculo {
public:
    string modelo;

    Carro(string marca, string modelo) : Veiculo(marca) {
        this->modelo = modelo;
    }

    void exibir() {
        cout << "Marca: " << marca << " | Modelo: " << modelo << endl;
    }
};

int main() {
    Veiculo v("Ford");
    v.exibir();

    Carro c("Toyota", "Corolla");
    c.exibir();

    return 0;
}
