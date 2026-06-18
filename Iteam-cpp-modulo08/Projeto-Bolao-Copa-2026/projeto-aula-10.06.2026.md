Seguinte

Temos que organizar o bolão da copa

## BOLÃO DA COPA 2026

Atividade de laboratório de Programação em C++


OBJETIVO:
Crie um programa em C++ que permita:
- Registrar os jogos e os placares do bolão
- Comparar com os resultados reais
- Calcular a pontução do participante
- Exibir o total de pontos


PONTUAÇÃO:

Acertar o resultado exato: 10 pontos

Acertar o vencedor (Mas errar o resultado exato): 5 pontos

Errar o jogo: 0 Pontos

Desenvolva a solução em C++, utilizando apenas os conceitos apresentados no primeiro slide. Não utilize listas, structs, matrizes, vetores, arrays ou quaisquer estruturas de dados mais avançadas. Mantenha a implementação restrita ao conteúdo abordado no primeiro slide, empregando apenas variáveis simples, operadores, estruturas condicionais e de repetição, quando permitidos pelo material.

Para ser mais exato. Pode usar somente o conteúdo dos slides das aulas dos dias 08 e 09

#include <iostream>
using namespace std;

// Função para calcular a pontuação de um jogo
int calcularPontos(int bolaoCasa, int bolaoFora, int realCasa, int realFora) {
    // Verifica resultado exato
    if (bolaoCasa == realCasa && bolaoFora == realFora) {
        return 10;
    }
    
    // Verifica se houve acerto do vencedor
    bool bolaoCasaVenceu = bolaoCasa > bolaoFora;
    bool realCasaVenceu = realCasa > realFora;
    bool bolaoEmpate = bolaoCasa == bolaoFora;
    bool realEmpate = realCasa == realFora;

    if ((bolaoCasaVenceu && realCasaVenceu) || 
        (!bolaoCasaVenceu && !realCasaVenceu && !bolaoEmpate && !realEmpate) || 
        (bolaoEmpate && realEmpate)) {
        return 5;
    }

    return 0;
}

int main() {
    int totalPontos = 0;
    int jogos = 4; // Total de jogos na lista

    for (int i = 1; i <= jogos; i++) {
        int bc, bf, rc, rf;
        cout << "Jogo " << i << " - Digite o placar do bolao (casa fora): ";
        cin >> bc >> bf;
        cout << "Jogo " << i << " - Digite o resultado oficial (casa fora): ";
        cin >> rc >> rf;

        totalPontos += calcularPontos(bc, bf, rc, rf);
        cout << "Pontos acumulados: " << totalPontos << endl << endl;
    }

    cout << "Pontuacao final: " << totalPontos << endl;
    return 0;
}

