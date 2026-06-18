// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 1: Classe Aluno com getter e setter
// ===============================================================

#include <iostream>
using namespace std;

class Aluno {
private:
    string nome;
    double nota;

public:
    Aluno(string nome, double nota) {
        this->nome = nome;
        if (nota >= 0 && nota <= 10) {
            this->nota = nota;
        } else {
            this->nota = 0;
            cout << "Nota inicial invalida! Definida como 0." << endl;
        }
    }

    string get_nome() {
        return nome;
    }

    double get_nota() {
        return nota;
    }

    void set_nota(double nova_nota) {
        if (nova_nota >= 0 && nova_nota <= 10) {
            nota = nova_nota;
            cout << "Nota atualizada para " << nova_nota << endl;
        } else {
            cout << "Nota invalida! Digite um valor entre 0 e 10." << endl;
        }
    }

    void exibir_informacoes() {
        cout << "Aluno: " << nome << " | Nota: " << nota << endl;
    }
};

int main() {
    Aluno a("Carlos", 8.5);
    a.exibir_informacoes();

    a.set_nota(12);
    a.exibir_informacoes();

    a.set_nota(9.5);
    a.exibir_informacoes();

    return 0;
}
