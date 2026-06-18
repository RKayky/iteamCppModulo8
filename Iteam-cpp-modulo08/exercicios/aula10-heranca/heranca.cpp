#include <iostream>
using namespace std;

// Classe base
class Funcionario {
protected:
    string nome;
    double salario;

public:
    Funcionario(string nome, double salario) {
        this->nome    = nome;
        this->salario = salario;
    }

    virtual double calcularBonus() {
        return salario * 0.05;
    }

    virtual void exibir() {
        cout << "Funcionario: " << nome
             << " | Salario: R$ " << salario
             << " | Bonus: R$ "   << calcularBonus() << endl;
    }

    virtual ~Funcionario() {}
};

// Classe derivada
class Gerente : public Funcionario {
public:
    Gerente(string nome, double salario) : Funcionario(nome, salario) {}

    double calcularBonus() override {
        return salario * 0.20;
    }

    void exibir() override {
        cout << "[Gerente]    " << nome
             << " | Salario: R$ " << salario
             << " | Bonus: R$ "   << calcularBonus() << endl;
    }
};

// Classe derivada
class Estagiario : public Funcionario {
public:
    Estagiario(string nome, double salario) : Funcionario(nome, salario) {}

    double calcularBonus() override {
        return 0;
    }

    void exibir() override {
        cout << "[Estagiario] " << nome
             << " | Salario: R$ " << salario
             << " | Bonus: R$ "   << calcularBonus() << endl;
    }
};

int main() {
    cout << "=== Sistema de Funcionarios ===" << endl;

    Funcionario* equipe[3];
    equipe[0] = new Gerente("Ana",    8000.00);
    equipe[1] = new Funcionario("Bruno", 4000.00);
    equipe[2] = new Estagiario("Carla", 1500.00);

    for (int i = 0; i < 3; i++) {
        equipe[i]->exibir();
    }

    // Polimorfismo em acao
    cout << "\n=== Polimorfismo — calcularBonus() ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Bonus: R$ " << equipe[i]->calcularBonus() << endl;
        delete equipe[i];
    }

    return 0;
}
