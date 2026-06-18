# ⚽ Bolão da Copa 2026 — C++

> Projeto final desenvolvido durante o **Módulo 08 — Linguagem de Programação C++** do curso de Capacitação em Desenvolvimento Full Stack do **ITEAM**.

---

## Sobre o Projeto

**Bolão da Copa 2026** é um programa de console desenvolvido em C++ que simula um bolão de apostas da Copa do Mundo. Cada participante palpita nos placares de 4 jogos da fase de grupos. Ao final, o sistema revela os resultados oficiais, calcula a pontuação de cada apostador e exibe o ranking completo com o campeão do bolão.

---

## Funcionalidades

- Suporte para **1 a 4 apostadores** por sessão
- Coleta de palpites **jogo a jogo**, perguntando os gols de cada time separadamente
- **Resultados ocultados** até que todos os apostadores tenham apostado
- Exibição dos **resultados oficiais** ao final
- **Pontuação detalhada** por jogo (placar exato, vencedor acertado ou erro)
- **Ranking** automático do 1º ao último lugar
- Anúncio do **campeão do bolão**
- **Validação de entrada** com `try/catch`: placares negativos são rejeitados

---

## Os 4 Jogos da Fase de Grupos

| # | Casa | Fora | Resultado Oficial |
|---|------|------|:-----------------:|
| 1 | BRA  | EGT  | **3 x 0**         |
| 2 | RSA  | MAR  | **1 x 1**         |
| 3 | FRA  | ARG  | **1 x 2**         |
| 4 | GER  | COS  | **4 x 2**         |

---

## Sistema de Pontuação

| Situação                        | Pontos |
|---------------------------------|:------:|
| Placar exato (ex: 3x0 → 3x0)   | **+10** |
| Vencedor/empate correto         | **+5**  |
| Palpite errado                  | **+0**  |

**Pontuação máxima:** 40 pontos (4 jogos × 10 pts)

---

## Versões

| Versão | Arquivo | Descrição |
|--------|---------|-----------|
| **V1** | [bolaoversao1/bolaocopa1.cpp](bolaoversao1/bolaocopa1.cpp) | Versão inicial — aulas 1–7, sem arrays/vetores, até 4 jogadores, ranking completo |
| **V2** | [bolaoversao2/bolaocopa2.cpp](bolaoversao2/bolaocopa2.cpp) | Versão com classes `Jogo` e `Apostador`, vetor estático e dinâmico, menu interativo |

---

## Como Compilar e Executar

### Pré-requisitos
- GCC / G++ instalado ([MinGW-w64](https://www.mingw-w64.org/) no Windows)

### Compilar

```bash
g++ bolaoversao1/bolaocopa1.cpp -o bolaocopa1
```

### Executar

```bash
# Windows
bolaocopa1.exe

# Linux / macOS
./bolaocopa1
```

---

## Exemplo de Execução

```
================================
      BOLAO DA COPA 2026
================================

--- Apostador 1 ---
Nome: Kayky

  Jogo 1: BRA x EGT
  Quantos gols o BRA vai fazer? 3
  Quantos gols o EGT vai fazer? 0

  Jogo 2: RSA x MAR
  Quantos gols o RSA vai fazer? 2
  Quantos gols o MAR vai fazer? 1
  ...

Ha mais algum apostador? (Y/N): N


================================
      RESULTADOS OFICIAIS
================================
  Jogo 1: BRA 3 x 0 EGT
  Jogo 2: RSA 1 x 1 MAR
  Jogo 3: FRA 1 x 2 ARG
  Jogo 4: GER 4 x 2 COS

================================
    PALPITES E PONTUACAO
================================

  Kayky:
    Jogo 1 (BRA x EGT): 3 x 0  [EXATO     +10]
    Jogo 2 (RSA x MAR): 2 x 1  [Vencedor  +5]
    Jogo 3 (FRA x ARG): 1 x 2  [EXATO     +10]
    Jogo 4 (GER x COS): 4 x 2  [EXATO     +10]
  Total: 35 / 40 pts

================================
           RANKING
================================
   1. Kayky                  35 pts

  Campeao do Bolao: Kayky!
================================
```

---

## Estrutura do Código

```
bolaoversao1/bolaocopa1.cpp
├── calcularPontos()     — lógica de pontuação por jogo
├── calcularTotal()      — soma os pontos dos 4 jogos
├── coletarPalpites()    — entrada de dados (passagem por referência)
├── exibirApostador()    — exibe palpites e pontuação de um jogador
└── main()               — fluxo principal: coleta → resultados → ranking
```

---

## Conceitos Aplicados (Aulas 1–7)

| Conceito | Aplicação no Projeto |
|---|---|
| Variáveis e constantes | Resultados oficiais com `const`, variáveis por apostador |
| Entrada/Saída (`cin`/`cout`) | Coleta de palpites e exibição formatada |
| `iomanip` (`setw`, `left`, `right`) | Alinhamento do ranking |
| `if/else` e operadores lógicos | Lógica de pontuação e controle de fluxo |
| `do-while` | Loop de apostadores (Y/N para continuar) |
| `for` | Laço de ranking (1º ao último lugar) |
| `try/catch/throw` | Validação de placares negativos |
| Funções com **passagem por referência** | `coletarPalpites()` preenche variáveis do `main` sem arrays |

> **Restrição do projeto:** implementado **sem arrays, matrizes, vetores, structs ou STL** — apenas os recursos cobertos nas aulas de 08/06 e 09/06.

---

## Contexto Acadêmico

**Curso:** Capacitação em Desenvolvimento Full Stack — Módulo 08  
**Disciplina:** Linguagem de Programação C++ (40h)  
**Instituição:** ITEAM  
**Professora:** Érika Dilliany Gaya Rabêlo dos Santos  
**Aula:** Projeto prático — 10/06/2026

---

## Autor

Desenvolvido em coletivo por [@RKayky](https://github.com/RKayky), [@DilliKel](https://github.com/DilliKel) e [@iany-jess](https://github.com/iany-jess) durante as aulas do Módulo 08 do ITEAM.

---

*Projeto desenvolvido com fins exclusivamente educacionais.*
