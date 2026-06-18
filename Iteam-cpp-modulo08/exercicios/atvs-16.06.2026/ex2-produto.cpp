// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 2: Classe Produto com getter e setter
// ===============================================================

#include <iostream>
#include <iomanip>
using namespace std;

class Produto {
private:
    string nome;
    double preco;

public:
    Produto(string nome, double preco) {
        this->nome = nome;
        if (preco > 0) {
            this->preco = preco;
        } else {
            this->preco = 0;
            cout << "Preco inicial invalido! Definido como 0." << endl;
        }
    }

    string get_nome() {
        return nome;
    }

    double get_preco() {
        return preco;
    }

    void set_preco(double novo_preco) {
        if (novo_preco > 0) {
            preco = novo_preco;
            cout << "Preco atualizado para R$ " << fixed << setprecision(2) << novo_preco << endl;
        } else {
            cout << "Preco invalido! O valor deve ser maior que zero." << endl;
        }
    }

    void exibir_informacoes() {
        cout << "Produto: " << nome
             << " | Preco: R$ " << fixed << setprecision(2) << preco << endl;
    }
};

int main() {
    Produto p1("Notebook", 3500.00);
    Produto p2("Mouse", 80.00);

    p1.exibir_informacoes();
    p2.exibir_informacoes();

    cout << endl;

    p1.set_preco(-1500);
    p1.exibir_informacoes();

    p1.set_preco(2999.90);
    p1.exibir_informacoes();

    return 0;
}
