// ===============================================================
// Aula: 17/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Aula Pratica: Heranca e Polimorfismo — Pessoa, Professor, Aluno
// ===============================================================

#include <iostream>
using namespace std;

class Pessoa {
protected:
    string nome;

public:
    Pessoa(string n) : nome(n) {}

    virtual void falar() {
        cout << nome << " esta falando." << endl;
    }
};

class Professor : public Pessoa {
private:
    string disciplina;

public:
    Professor(string n, string d) : Pessoa(n), disciplina(d) {}

    void falar() override {
        cout << "Professor(a) " << nome << " esta ensinando " << disciplina << "." << endl;
    }
};

class Aluno : public Pessoa {
private:
    int matricula;

public:
    Aluno(string n, int m) : Pessoa(n), matricula(m) {}

    void falar() override {
        cout << "Aluno(a) " << nome << " (matricula: " << matricula << ") estas estudandinho." << endl;
    }
};

int main() {
    Pessoa p("DilliKel");
    Professor prof("Erika", "C++");
    Aluno aluno("Kelvin", 123456789);

    p.falar();
    prof.falar();
    aluno.falar();

    return 0;
}
