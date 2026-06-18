// ===============================================================
// Aula: 17/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 2: Heranca — Funcionario e Gerente
// ===============================================================

#include <iostream>
using namespace std;

class Funcionario {
public:
    string nome;
    double salario;

    Funcionario(string nome, double salario) {
        this->nome = nome;
        this->salario = salario;
    }

    virtual void mostrarSalario() {
        cout << nome << " — Salario: R$ " << salario << endl;
    }
};

class Gerente : public Funcionario {
public:
    Gerente(string nome, double salario) : Funcionario(nome, salario) {
    }

    void mostrarSalario() {
        double bonus = salario * 0.20;
        cout << nome << " (Gerente) — Salario: R$ " << salario
             << " + Bonus: R$ " << bonus
             << " = Total: R$ " << (salario + bonus) << endl;
    }
};

int main() {
    Funcionario f("Carlos", 3000.00);
    f.mostrarSalario();

    Gerente g("Ana", 5000.00);
    g.mostrarSalario();

    return 0;
}
