// ===============================================================
// Aula: 15/06/2026
// Disciplina: Linguagem de Programacao C++ — Modulo 08
// Professora: Erika Dilliany Gaya Rabelo dos Santos
// Aluno: Kelvin Dilli
// Atividade Pratica de Laboratorio C++ 2
// Sistema de Bolao da Copa — com vetores e classes
// ===============================================================

#include <iostream>
using namespace std;

// ===== Classe Jogo =====
class Jogo {
public:
    string timeCasa;
    string timeFora;
    int golsCasa;
    int golsFora;

    Jogo() {
        this->timeCasa = "";
        this->timeFora = "";
        this->golsCasa = 0;
        this->golsFora = 0;
    }

    void exibir() {
        cout << timeCasa << " " << golsCasa << " x " << golsFora << " " << timeFora;
    }
};

// ===== Classe Apostador =====
class Apostador {
private:
    string nome;
    int pontuacao;
    Jogo* palpites;  // vetor dinamico de palpites
    int qtdJogos;

public:
    Apostador() {
        this->nome = "";
        this->pontuacao = 0;
        this->qtdJogos = 4;
        this->palpites = new Jogo[4];
    }

    ~Apostador() {
        delete[] palpites;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    string getNome() { return nome; }
    int getPontuacao() { return pontuacao; }

    void cadastrarPalpites(Jogo jogos[], int n) {
        cout << "\n--- Palpites de " << nome << " ---\n";
        for (int i = 0; i < n; i++) {
            int gcasa, gfora;
            cout << "Jogo " << (i + 1) << " (" << jogos[i].timeCasa << " x " << jogos[i].timeFora << ")\n";
            cout << "  Gols " << jogos[i].timeCasa << ": ";
            cin >> gcasa; cin.clear(); cin.ignore(1000, '\n');
            cout << "  Gols " << jogos[i].timeFora << ": ";
            cin >> gfora; cin.clear(); cin.ignore(1000, '\n');
            palpites[i].timeCasa = jogos[i].timeCasa;
            palpites[i].timeFora = jogos[i].timeFora;
            palpites[i].golsCasa = gcasa;
            palpites[i].golsFora = gfora;
        }
    }

    void calcularPontuacao(Jogo jogos[], int n) {
        pontuacao = 0;
        for (int i = 0; i < n; i++) {
            if (palpites[i].golsCasa == jogos[i].golsCasa &&
                palpites[i].golsFora == jogos[i].golsFora) {
                pontuacao += 10;
            } else {
                int realRes = (jogos[i].golsCasa > jogos[i].golsFora) ? 1 :
                              (jogos[i].golsCasa < jogos[i].golsFora) ? -1 : 0;
                int palpiteRes = (palpites[i].golsCasa > palpites[i].golsFora) ? 1 :
                                 (palpites[i].golsCasa < palpites[i].golsFora) ? -1 : 0;
                if (realRes == palpiteRes) {
                    pontuacao += 5;
                }
            }
        }
    }
};

// ===== Main =====
int main() {
    // Vetor estatico — 4 jogos reais
    Jogo jogosReais[4];
    jogosReais[0].timeCasa = "BRA"; jogosReais[0].timeFora = "EGT";
    jogosReais[1].timeCasa = "RSA"; jogosReais[1].timeFora = "MAR";
    jogosReais[2].timeCasa = "FRA"; jogosReais[2].timeFora = "ARG";
    jogosReais[3].timeCasa = "GER"; jogosReais[3].timeFora = "COS";

    // Vetor dinamico — 3 apostadores
    Apostador* apostadores = new Apostador[3];

    int opcao;
    do {
        cout << "\n================================\n";
        cout << "        BOLAO DA COPA 2026\n";
        cout << "================================\n";
        cout << "1. Cadastrar resultados dos jogos\n";
        cout << "2. Cadastrar palpites dos apostadores\n";
        cout << "3. Calcular pontuacao\n";
        cout << "4. Exibir ranking\n";
        cout << "0. Sair\n";
        cout << "Opcao: ";
        cin >> opcao; cin.clear(); cin.ignore(1000, '\n');

        if (opcao == 1) {
            cout << "\n--- Resultados Reais ---\n";
            for (int i = 0; i < 4; i++) {
                int gcasa, gfora;
                cout << "Jogo " << (i + 1) << " (" << jogosReais[i].timeCasa << " x " << jogosReais[i].timeFora << ")\n";
                cout << "  Gols " << jogosReais[i].timeCasa << ": ";
                cin >> gcasa; cin.clear(); cin.ignore(1000, '\n');
                cout << "  Gols " << jogosReais[i].timeFora << ": ";
                cin >> gfora; cin.clear(); cin.ignore(1000, '\n');
                jogosReais[i].golsCasa = gcasa;
                jogosReais[i].golsFora = gfora;
            }
            cout << "Resultados cadastrados!\n";
        }
        else if (opcao == 2) {
            for (int i = 0; i < 3; i++) {
                string nome;
                cout << "\nNome do apostador " << (i + 1) << ": ";
                getline(cin, nome);
                apostadores[i].setNome(nome);
                apostadores[i].cadastrarPalpites(jogosReais, 4);
            }
        }
        else if (opcao == 3) {
            for (int i = 0; i < 3; i++) {
                apostadores[i].calcularPontuacao(jogosReais, 4);
            }
            cout << "Pontuacao calculada!\n";
        }
        else if (opcao == 4) {
            cout << "\n=== RANKING DO BOLAO ===\n";
            for (int i = 0; i < 3; i++) {
                cout << (i + 1) << ". " << apostadores[i].getNome()
                     << " — " << apostadores[i].getPontuacao() << " pts\n";
            }
        }

    } while (opcao != 0);

    delete[] apostadores;
    return 0;
}
