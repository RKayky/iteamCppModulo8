// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 3: Classes Aluno e Escola com encapsulamento
// ===============================================================

#include <iostream>
using namespace std;

class Aluno {
private:
    string nome;
    int idade;
    string curso;

public:
    Aluno() {
        this->nome = "";
        this->idade = 0;
        this->curso = "";
    }

    Aluno(string nome, int idade, string curso) {
        this->nome = nome;
        this->idade = (idade > 0) ? idade : 0;
        this->curso = curso;
    }

    string getNome() { return nome; }
    int getIdade() { return idade; }
    string getCurso() { return curso; }

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido!" << endl;
        }
    }

    void setIdade(int nova_idade) {
        if (nova_idade > 0) {
            idade = nova_idade;
        } else {
            cout << "Idade invalida! Deve ser maior que zero." << endl;
        }
    }

    void setCurso(string novo_curso) {
        if (!novo_curso.empty()) {
            curso = novo_curso;
        } else {
            cout << "Curso invalido!" << endl;
        }
    }

    void apresentar() {
        cout << "Nome: " << nome
             << " | Idade: " << idade
             << " | Curso: " << curso << endl;
    }
};

class Escola {
private:
    string nome;
    Aluno alunos[10];
    int qtdAlunos;

public:
    Escola(string nome) {
        this->nome = nome;
        this->qtdAlunos = 0;
    }

    string getNome() {
        return nome;
    }

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido! A escola precisa ter um nome." << endl;
        }
    }

    void adicionarAluno(Aluno a) {
        alunos[qtdAlunos] = a;
        qtdAlunos++;
        cout << "Aluno \"" << a.getNome() << "\" matriculado!" << endl;
    }

    void listarAlunos() {
        cout << "\n=== Alunos da " << nome << " ===" << endl;
        if (qtdAlunos == 0) {
            cout << "Nenhum aluno matriculado." << endl;
            return;
        }
        for (int i = 0; i < qtdAlunos; i++) {
            alunos[i].apresentar();
        }
    }
};

int main() {
    Escola escola("Escola Futuro");

    Aluno a1("Joao", 20, "Informatica");
    Aluno a2("Maria", 22, "Engenharia");

    escola.adicionarAluno(a1);
    escola.adicionarAluno(a2);

    escola.listarAlunos();

    cout << endl;

    a1.setNome("Joao Pedro");
    a1.setIdade(-5);
    a1.setIdade(21);
    a1.apresentar();

    escola.setNome("Escola do Futuro");
    cout << "Novo nome da escola: " << escola.getNome() << endl;

    return 0;
}
