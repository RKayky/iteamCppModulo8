// ===============================--=============================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika
// Aluno: Kelvin Araújo Ferreira
// Exercicio: Fixacao
// Objeto escolhido: Energetico
// ===============================================================

#include <iostream>
using namespace std;

class Energetico {
private:
    string marca;
    string sabor;
    int volume;

public:
    Energetico(string marca, string sabor, int volume) {
        this->marca  = marca;
        this->sabor  = sabor;
        this->volume = volume;
    }

    void exibir() {
        cout << "Marca: "  << marca        << endl;
        cout << "Sabor: "  << sabor        << endl;
        cout << "Volume: " << volume << "ml" << endl;
    }

    void beber() {
        cout << "Tomando um " << marca << " sabor " << sabor << "!!!" << endl;
    }
};

int main() {
    Energetico e1("Monster",   "Mango Loco",   473);
    Energetico e2("Monster",   "Roxo",     473);

    e1.exibir();
    e1.beber();

    cout << endl;

    e2.exibir();
    e2.beber();

    return 0;
}
