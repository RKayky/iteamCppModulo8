// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 2: Classe Biblioteca com lista de livros encapsulada
// ===============================================================

#include <iostream>
using namespace std;

class Biblioteca {
private:
    string nome;
    string livros[20];
    int qtdLivros;

public:
    Biblioteca(string nome) {
        this->nome = nome;
        this->qtdLivros = 0;
    }

    string getNome() {
        return nome;
    }

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido! A biblioteca precisa ter um nome." << endl;
        }
    }

    void adicionarLivro(string titulo) {
        if (titulo.empty()) {
            cout << "Titulo invalido! O livro precisa ter um titulo." << endl;
            return;
        }
        for (int i = 0; i < qtdLivros; i++) {
            if (livros[i] == titulo) {
                cout << "O livro \"" << titulo << "\" ja esta cadastrado." << endl;
                return;
            }
        }
        livros[qtdLivros] = titulo;
        qtdLivros++;
        cout << "Livro \"" << titulo << "\" adicionado!" << endl;
    }

    void listarLivros() {
        cout << "\n=== Acervo da " << nome << " ===" << endl;
        if (qtdLivros == 0) {
            cout << "Nenhum livro cadastrado." << endl;
            return;
        }
        for (int i = 0; i < qtdLivros; i++) {
            cout << "  " << (i + 1) << ". " << livros[i] << endl;
        }
    }
};

int main() {
    Biblioteca b("Biblioteca Central");

    b.adicionarLivro("Dom Casmurro");
    b.adicionarLivro("O Cortico");
    b.adicionarLivro("Iracema");
    b.adicionarLivro("Dom Casmurro");

    b.listarLivros();

    cout << endl;
    b.setNome("Biblioteca Municipal");
    cout << "Novo nome: " << b.getNome() << endl;

    return 0;
}
