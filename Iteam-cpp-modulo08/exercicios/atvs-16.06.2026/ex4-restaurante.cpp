// ===============================================================
// Aula: 16/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Araújo Ferreira
// Exercicio 1: Classe Restaurante com cardapio encapsulado
// ===============================================================

#include <iostream>
using namespace std;

class Restaurante {
private:
    string nome;
    string cardapio[10];
    int qtdPratos;

public:
    Restaurante(string nome) {
        this->nome = nome;
        this->qtdPratos = 0;
    }

    string getNome() {
        return nome;
    }

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido! O restaurante precisa ter um nome." << endl;
        }
    }

    void adicionarPrato(string prato) {
        for (int i = 0; i < qtdPratos; i++) {
            if (cardapio[i] == prato) {
                cout << "O prato \"" << prato << "\" ja esta no cardapio." << endl;
                return;
            }
        }
        cardapio[qtdPratos] = prato;
        qtdPratos++;
        cout << "Prato \"" << prato << "\" adicionado ao cardapio!" << endl;
    }

    void listarCardapio() {
        cout << "\n=== Cardapio do " << nome << " ===" << endl;
        for (int i = 0; i < qtdPratos; i++) {
            cout << "  " << (i + 1) << ". " << cardapio[i] << endl;
        }
    }

    void atenderCliente(string nome_cliente, string prato) {
        for (int i = 0; i < qtdPratos; i++) {
            if (cardapio[i] == prato) {
                cout << "Pedido realizado: " << nome_cliente << " pediu " << prato << ". Bom apetite!" << endl;
                return;
            }
        }
        cout << "Desculpe, " << prato << " nao esta no cardapio." << endl;
    }
};

int main() {
    Restaurante r("Sabor Caseiro");

    r.adicionarPrato("Frango");
    r.adicionarPrato("Macarrao");
    r.adicionarPrato("Lasanha");
    r.adicionarPrato("Macarrao");

    r.listarCardapio();

    cout << endl;
    r.atenderCliente("Ana", "Lasanha");
    r.atenderCliente("Bruno", "Pizza");

    cout << endl;
    r.setNome("Sabor da Casa");
    cout << "Novo nome do restaurante: " << r.getNome() << endl;

    return 0;
}
