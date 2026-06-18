// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 4: Classe ContaBancaria
// ===============================================================

#include <iostream>
using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;

public:
    ContaBancaria(string titular, double saldo) {
        this->titular = titular;
        this->saldo   = saldo;
    }

    void depositar(double valor) {
        saldo += valor;
        cout << "Deposito de R$ " << valor << " realizado." << endl;
    }

    void sacar(double valor) {
        if (valor > saldo) {
            cout << "Saldo insuficiente." << endl;
            return;
        }
        saldo -= valor;
        cout << "Saque de R$ " << valor << " realizado." << endl;
    }

    void exibirSaldo() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo: R$ " << saldo  << endl;
    }
};

int main() {
    ContaBancaria conta("Kelvin Araujo", 1000.0);

    conta.exibirSaldo();
    cout << endl;

    conta.depositar(500.0);
    conta.sacar(200.0);
    cout << endl;

    conta.exibirSaldo();

    return 0;
}
