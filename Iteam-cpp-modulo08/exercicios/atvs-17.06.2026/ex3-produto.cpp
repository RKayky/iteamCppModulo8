// ===============================================================
// Aula: 17/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio de Fixacao 3: Heranca — Sistema de Produtos
// ===============================================================

#include <iostream>
using namespace std;

class Produto {
public:
    string nome;
    double preco;

    Produto(string nome, double preco) {
        this->nome = nome;
        this->preco = preco;
    }

    void exibir() {
        cout << "Produto: " << nome << " | Preco: R$ " << preco << endl;
    }
};

class Livro : public Produto {
public:
    string autor;

    Livro(string nome, double preco, string autor) : Produto(nome, preco) {
        this->autor = autor;
    }

    void exibir() {
        cout << "Livro: " << nome << " | Autor: " << autor
             << " | Preco: R$ " << preco << endl;
    }
};

class Eletronico : public Produto {
public:
    string marca;

    Eletronico(string nome, double preco, string marca) : Produto(nome, preco) {
        this->marca = marca;
    }

    void exibir() {
        cout << "Eletronico: " << nome << " | Marca: " << marca
             << " | Preco: R$ " << preco << endl;
    }
};

int main() {
    Livro l1("Dom Casmurro", 39.90, "Machado de Assis");
    Livro l2("O Cortico", 29.90, "Alcino de Azevedo");
    l1.exibir();
    l2.exibir();

    cout << endl;

    Eletronico e1("Notebook", 3500.00, "Dell");
    Eletronico e2("Mouse", 80.00, "Logitech");
    e1.exibir();
    e2.exibir();

    return 0;
}
