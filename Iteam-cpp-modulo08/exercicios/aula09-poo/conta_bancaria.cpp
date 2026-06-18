#include <iostream>
using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;

public:
    // Construtor
    ContaBancaria(string nome, double saldoInicial) {
        titular = nome;
        saldo   = saldoInicial;
    }

    void depositar(double valor) {
        if (valor <= 0) {
            cout << "Valor de deposito invalido." << endl;
            return;
        }
        saldo += valor;
        cout << "Deposito de R$ " << valor << " realizado." << endl;
    }

    void sacar(double valor) {
        if (valor <= 0) {
            cout << "Valor de saque invalido." << endl;
            return;
        }
        if (valor > saldo) {
            cout << "Saldo insuficiente." << endl;
            return;
        }
        saldo -= valor;
        cout << "Saque de R$ " << valor << " realizado." << endl;
    }

    double getSaldo() {
        return saldo;
    }

    void exibirExtrato() {
        cout << "-------------------------" << endl;
        cout << "Titular: " << titular     << endl;
        cout << "Saldo:   R$ " << saldo    << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    ContaBancaria conta("Kayky", 1000.00);

    cout << "=== Conta Bancaria ===" << endl;
    conta.exibirExtrato();

    conta.depositar(500.00);
    conta.sacar(200.00);
    conta.sacar(2000.00);

    cout << "\nExtrato final:" << endl;
    conta.exibirExtrato();

    return 0;
}
