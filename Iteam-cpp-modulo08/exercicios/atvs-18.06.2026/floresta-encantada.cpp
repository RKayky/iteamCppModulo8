// ===============================================================
// Aula: 18/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Dilli
// Desafio: Na Floresta Encantada — Arvore Binaria de Personagens
// ===============================================================

#include <iostream>
using namespace std;

// ===== Classes de Personagens =====

class Personagem {
protected:
    string nome;
    int nivelDePoder;
    string tipo;

public:
    Personagem(string nome, int nivelDePoder, string tipo) {
        this->nome = nome;
        this->nivelDePoder = nivelDePoder;
        this->tipo = tipo;
    }

    int getNivelDePoder() {
        return nivelDePoder;
    }

    virtual void exibir() {
        cout << "[" << tipo << "] " << nome << " - Poder: " << nivelDePoder << endl;
    }

    virtual ~Personagem() {}
};

class ChefeDaFloresta : public Personagem {
private:
    string reino;

public:
    ChefeDaFloresta(string nome, int nivelDePoder, string reino)
        : Personagem(nome, nivelDePoder, "Chefe") {
        this->reino = reino;
    }

    void exibir() override {
        cout << "[Chefe] " << nome << " - Poder: " << nivelDePoder
             << " | Reino: " << reino << endl;
    }
};

// ===== No da Arvore =====

struct No {
    Personagem* personagem;
    No* esquerda;
    No* direita;

    No(Personagem* p) {
        this->personagem = p;
        this->esquerda = nullptr;
        this->direita = nullptr;
    }
};

// ===== Arvore Binaria de Personagens =====

class ArvorePersonagens {
private:
    No* raiz;

    void exibirEmOrdem(No* no) {
        if (no == nullptr) return;
        exibirEmOrdem(no->esquerda);
        no->personagem->exibir();
        exibirEmOrdem(no->direita);
    }

    void destruir(No* no) {
        if (no == nullptr) return;
        destruir(no->esquerda);
        destruir(no->direita);
        delete no->personagem;
        delete no;
    }

public:
    ArvorePersonagens() {
        this->raiz = nullptr;
    }

    ~ArvorePersonagens() {
        destruir(raiz);
    }

    void inserir(Personagem* p) {
        No* novo = new No(p);

        if (raiz == nullptr) {
            raiz = novo;
            return;
        }

        No* atual = raiz;
        while (true) {
            if (p->getNivelDePoder() < atual->personagem->getNivelDePoder()) {
                if (atual->esquerda == nullptr) {
                    atual->esquerda = novo;
                    return;
                }
                atual = atual->esquerda;
            } else {
                if (atual->direita == nullptr) {
                    atual->direita = novo;
                    return;
                }
                atual = atual->direita;
            }
        }
    }

    void exibirEmOrdem() {
        cout << "\n=== Floresta Encantada - do menos ao mais poderoso ===" << endl;
        exibirEmOrdem(raiz);
    }
};

// ===== Main =====

int main() {
    ArvorePersonagens floresta;

    floresta.inserir(new Personagem("Lupi", 30, "Animal"));
    floresta.inserir(new Personagem("Mago Merlin", 85, "Mago"));
    floresta.inserir(new Personagem("Fada Lia", 45, "Fada"));
    floresta.inserir(new Personagem("Goblin", 20, "Criatura"));
    floresta.inserir(new ChefeDaFloresta("Akihiko Kayaba", 100, "Aincrad - Andar 100"));
    floresta.inserir(new ChefeDaFloresta("The Gleam Eyes", 60, "Aincrad - Andar 74"));

    floresta.exibirEmOrdem();

    return 0;
}
