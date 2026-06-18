// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 3: Classe Carro com acelerar e frear
// ===============================================================

#include <iostream>
using namespace std;

class Carro {
private:
    string marca;
    int velocidade;

public:
    Carro(string marca) {
        this->marca = marca;
        this->velocidade = 0;
    }

    string get_marca() {
        return marca;
    }

    int get_velocidade() {
        return velocidade;
    }

    void acelerar(int valor) {
        velocidade += valor;
        cout << marca << " acelerou para " << velocidade << " km/h" << endl;
    }

    void frear(int valor) {
        velocidade -= valor;
        if (velocidade < 0) {
            velocidade = 0;
        }
        cout << marca << " freou para " << velocidade << " km/h" << endl;
    }

    void exibir() {
        cout << "Carro: " << marca << " | Velocidade: " << velocidade << " km/h" << endl;
    }
};

int main() {
    Carro c("Toyota");

    c.exibir();
    c.acelerar(80);
    c.frear(30);
    c.exibir();

    c.frear(100);
    c.exibir();

    return 0;
}
