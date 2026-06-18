# Módulo 08 — Linguagem de Programação C++

> Repositório de exercícios, projetos e materiais do **Módulo 08** do curso de Capacitação em Desenvolvimento Full Stack do **ITEAM**.

**Professora:** Érika Dilliany Gaya Rabêlo dos Santos  
**Carga horária:** 40 horas  
**Trio Fechadão:** [@DilliKel](https://github.com/DilliKel) · [@RKayky](https://github.com/RKayky) ·  [@iany-jess](https://github.com/iany-jess)

---

## Estrutura do Repositório

```
modulo08/
├── material/                          # PDFs das aulas e apostila
├── exercicios/
│   ├── aula01-introducao/             # Hello World, estrutura básica
│   ├── aula02-variaveis-tipos/        # Variáveis, tipos e operadores
│   ├── aula03-entrada-saida/          # cin, cout, iomanip
│   ├── aula04-condicionais/           # if/else, switch
│   ├── aula05-repeticao/              # for, while, do-while
│   ├── aula06-excecoes/               # try/catch/throw
│   ├── aula07-funcoes/                # passagem por valor e referência
│   ├── aula08-ponteiros/              # ponteiros e alocação dinâmica
│   ├── aula09-poo/                    # classes, construtores, encapsulamento
│   ├── aula10-heranca/                # herança e polimorfismo
│   ├── aula11-stl-arquivos/           # templates, STL e fstream
│   ├── atvs-15.06.2026/               # atividades de fixação — POO (classes e objetos)
│   ├── atvs-16.06.2026/               # atividades de fixação — Encapsulamento
│   ├── atvs-17.06.2026/               # atividades de fixação — Herança
│   └── atvs-18.06.2026/               # atividades de fixação — Árvores e Classes Abstratas
├── Projeto-Bolao-Copa-2026/           # Projeto prático (V1 e V2 entregues)
└── .gitignore
```

---

## Exercícios por Aula

### Aula 1 — Introdução ao C++
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula01-introducao/hello.cpp](exercicios/aula01-introducao/hello.cpp) | Hello World e estrutura básica de um programa C++ |

### Aula 2 — Variáveis, Tipos e Operadores
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula02-variaveis-tipos/variaveis.cpp](exercicios/aula02-variaveis-tipos/variaveis.cpp) | Declaração e uso de variáveis dos principais tipos |

### Aula 3 — Entrada e Saída de Dados
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula03-entrada-saida/idade.cpp](exercicios/aula03-entrada-saida/idade.cpp) | Leitura de idade com `cin` e formatação de saída com `iomanip` |

### Aula 4 — Condicionais
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula04-condicionais/condicionais.cpp](exercicios/aula04-condicionais/condicionais.cpp) | Estruturas `if/else` e `switch` |

### Aula 5 — Estruturas de Repetição
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula05-repeticao/tabuada5.cpp](exercicios/aula05-repeticao/tabuada5.cpp) | Tabuada do 5 com laço `for` |
| [exercicios/aula05-repeticao/testeryan.cpp](exercicios/aula05-repeticao/testeryan.cpp) | Verificação simples de senha com `if/else` |

### Aula 6 — Exceções e Revisão Integrada
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula06-excecoes/login.cpp](exercicios/aula06-excecoes/login.cpp) | Sistema de login com 3 tentativas, `try/catch/throw` e validação de campos vazios |

### Aula 7 — Funções
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula07-funcoes/funcoes.cpp](exercicios/aula07-funcoes/funcoes.cpp) | Passagem por valor e referência, sobrecarga e recursividade (fatorial) |

### Aula 8 — Ponteiros e Alocação Dinâmica
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula08-ponteiros/ponteiros.cpp](exercicios/aula08-ponteiros/ponteiros.cpp) | Troca sem variável auxiliar, `new`/`delete`, aritmética de ponteiros |

### Aula 9 — POO: Classes e Objetos
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula09-poo/conta_bancaria.cpp](exercicios/aula09-poo/conta_bancaria.cpp) | Classe `ContaBancaria` com encapsulamento, depósito, saque e extrato |
| [exercicios/aula09-poo/cachorro.cpp](exercicios/aula09-poo/cachorro.cpp) | Classe `Cachorro` com atributos e comportamentos básicos |

### Aula 10 — Herança e Polimorfismo
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula10-heranca/heranca.cpp](exercicios/aula10-heranca/heranca.cpp) | Hierarquia `Funcionario → Gerente / Estagiario` com `virtual` e polimorfismo |

### Aula 11 — Templates, STL e Arquivos
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/aula11-stl-arquivos/stl_arquivos.cpp](exercicios/aula11-stl-arquivos/stl_arquivos.cpp) | Template genérico, `vector`, `sort`/`find` e leitura/escrita com `fstream` |

### Atividades de Fixação — 15/06/2026
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/atvs-15.06.2026/ex1-pessoa.cpp](exercicios/atvs-15.06.2026/ex1-pessoa.cpp) | Classe `Pessoa` com nome e idade |
| [exercicios/atvs-15.06.2026/ex2-cachorro.cpp](exercicios/atvs-15.06.2026/ex2-cachorro.cpp) | Classe `Cachorro` com método `latir()` |
| [exercicios/atvs-15.06.2026/ex3-aluno.cpp](exercicios/atvs-15.06.2026/ex3-aluno.cpp) | Classe `Aluno` com cálculo de média e situação |
| [exercicios/atvs-15.06.2026/ex4-conta-bancaria.cpp](exercicios/atvs-15.06.2026/ex4-conta-bancaria.cpp) | Classe `ContaBancaria` com depósito, saque e saldo |
| [exercicios/atvs-15.06.2026/ex5-animal.cpp](exercicios/atvs-15.06.2026/ex5-animal.cpp) | Classe `Animal` com método `emitir_som()` |
| [exercicios/atvs-15.06.2026/energetico.cpp](exercicios/atvs-15.06.2026/energetico.cpp) | Classe `Energetico` — exercício de fixação extra |

### Atividades de Fixação — 16/06/2026
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/atvs-16.06.2026/ex1-aluno.cpp](exercicios/atvs-16.06.2026/ex1-aluno.cpp) | Fixação 1 — Classe `Aluno` com `set_nota()` validando 0–10 |
| [exercicios/atvs-16.06.2026/ex2-produto.cpp](exercicios/atvs-16.06.2026/ex2-produto.cpp) | Fixação 2 — Classe `Produto` com `set_preco()` validando > 0 |
| [exercicios/atvs-16.06.2026/ex3-carro.cpp](exercicios/atvs-16.06.2026/ex3-carro.cpp) | Fixação 3 — Classe `Carro` com `acelerar()` e `frear()` (nunca abaixo de 0) |
| [exercicios/atvs-16.06.2026/ex4-restaurante.cpp](exercicios/atvs-16.06.2026/ex4-restaurante.cpp) | Exercício 1 — Classe `Restaurante` com cardápio, sem duplicatas, atendimento de clientes |
| [exercicios/atvs-16.06.2026/ex5-biblioteca.cpp](exercicios/atvs-16.06.2026/ex5-biblioteca.cpp) | Exercício 2 — Classe `Biblioteca` com acervo, validação e sem duplicatas |
| [exercicios/atvs-16.06.2026/ex6-escola.cpp](exercicios/atvs-16.06.2026/ex6-escola.cpp) | Exercício 3 — Classes `Aluno` (com getters/setters validados) e `Escola` com lista de alunos |

### Atividades de Fixação — 17/06/2026
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/atvs-17.06.2026/ex1-veiculo.cpp](exercicios/atvs-17.06.2026/ex1-veiculo.cpp) | Fixação 1 — `Veiculo` (base) e `Carro` (herda marca, adiciona modelo) |
| [exercicios/atvs-17.06.2026/ex2-funcionario.cpp](exercicios/atvs-17.06.2026/ex2-funcionario.cpp) | Fixação 2 — `Funcionario` e `Gerente` com `mostrarSalario()` sobrescrito (+20% bônus) |
| [exercicios/atvs-17.06.2026/ex3-produto.cpp](exercicios/atvs-17.06.2026/ex3-produto.cpp) | Fixação 3 — `Produto` (base), `Livro` (adiciona autor) e `Eletronico` (adiciona marca) |
| [exercicios/atvs-17.06.2026/aula-pratica.cpp](exercicios/atvs-17.06.2026/aula-pratica.cpp) | Aula prática — `Pessoa` (virtual), `Professor` e `Aluno` com `override` |

### Atividades de Fixação — 18/06/2026
| Arquivo | Descrição |
|---------|-----------|
| [exercicios/atvs-18.06.2026/forma_geometrica.cpp](exercicios/atvs-18.06.2026/forma_geometrica.cpp) | Exemplo do slide — classe abstrata `Forma` com `Circulo`, `Retangulo` e `Triangulo` |
| [exercicios/atvs-18.06.2026/arvore.cpp](exercicios/atvs-18.06.2026/arvore.cpp) | Exemplo do slide — `ArvoreBinaria` com índices e percurso em ordem |
| [exercicios/atvs-18.06.2026/floresta-encantada.cpp](exercicios/atvs-18.06.2026/floresta-encantada.cpp) | Desafio — `Personagem` e `ChefeDaFloresta` em árvore binária ordenada por poder |

---

## Projetos Práticos

### Bolão da Copa 2026 — V1 (Aula 10/06)
Projeto prático da aula de 10/06/2026. Console em C++ com suporte a múltiplos apostadores, pontuação automática e ranking — implementado sem arrays/vetores, usando apenas conceitos das aulas 1–7.

**Status:** ✓ Entregue | **Acesse:** [Projeto-Bolao-Copa-2026/](Projeto-Bolao-Copa-2026/) — [README do projeto](Projeto-Bolao-Copa-2026/README.md)

---

### Bolão da Copa 2026 — V2 (Atividade Prática de Laboratório C++ 2 — 15/06)
Segunda atividade prática avaliada. Sistema de bolão refeito com **classes e vetores**.

**Status:** ✓ Implementado | [bolaoversao2/bolaocopa2.cpp](Projeto-Bolao-Copa-2026/bolaoversao2/bolaocopa2.cpp)

**Requisitos:**
- Classes `Jogo` (timeCasa, timeFora, golsCasa, golsFora) e `Apostador` (nome, pontuação, palpites)
- **Vetor estático** para os 4 jogos reais
- **Vetor dinâmico** (`new[]`/`delete[]` ou `vector`) para os palpites de cada apostador
- 3 apostadores (nomes fixos ou digitados)
- Pontuação: placar exato = **10 pts**, acertar vencedor/empate = **5 pts**
- Menu: cadastrar jogos → cadastrar palpites → calcular pontuação → exibir ranking

---

## Progresso do Curso

| Aula | Tema | Exercício entregue |
|------|------|--------------------|
| 1 | Introdução ao C++ | `hello.cpp` |
| 2 | Variáveis, Tipos e Operadores | `variaveis.cpp` |
| 3 | Entrada/Saída (`cin`/`cout`/`iomanip`) | `idade.cpp` |
| 4 | Condicionais (`if/else`, `switch`) | `condicionais.cpp` |
| 5 | Repetição (`for`, `while`, `do-while`) | `tabuada5.cpp`, `testeryan.cpp` |
| 6 | Exceções (`try/catch/throw`) | `login.cpp` |
| 7 | Funções (valor e referência) | `funcoes.cpp` + aplicado em `bolaocopa1.cpp` |
| 8 | Ponteiros e Alocação Dinâmica | `ponteiros.cpp` |
| 9 | POO — Classes e Objetos | `conta_bancaria.cpp` + atividades 15/06 e 16/06 |
| 10 | Herança e Polimorfismo | `heranca.cpp` + atividades 17/06 e 18/06 |
| 11 | Templates, STL e Arquivos | `stl_arquivos.cpp` |

---

## Material de Apoio

| Arquivo | Conteúdo |
|---------|----------|
| [material/Apostila-Modulo08.pdf](material/Apostila-Modulo08.pdf) | Apostila completa do módulo (aulas 1–11) |
| [material/Slides-Aula-08.06.2026.pdf](material/Slides-Aula-08.06.2026.pdf) | Slides — Aulas 1, 2 e 3 |
| [material/Slides-Aula-09.06.2026.pdf](material/Slides-Aula-09.06.2026.pdf) | Slides — Aulas 4, 5, 6 e 7 |
| [material/Slides-aulas-11~12.06.2026.pdf](material/Slides-aulas-11~12.06.2026.pdf) | Slides — Aula 8 (Ponteiros) |
| [material/Atv-Pratica-aula-10.06.2026.pdf](material/Atv-Pratica-aula-10.06.2026.pdf) | Enunciado da atividade prática (Bolão) |
| [material/Slides-Aula-15.06.2026.pdf](material/Slides-Aula-15.06.2026.pdf) | Slides — Aulas 9, 10 e 11 (POO, Herança, STL) |
| [material/Slides-Aula-16.06.2026.pdf](material/Slides-Aula-16.06.2026.pdf) | Slides — Aula 9 continuação (Encapsulamento, getters/setters) |
| [material/Slides-Aula-17.06.2026.pdf](material/Slides-Aula-17.06.2026.pdf) | Slides — Aula 10 (Herança e Polimorfismo) |
| [material/Slides-Aula-18.06.2026.pdf](material/Slides-Aula-18.06.2026.pdf) | Slides — Aulas 9, 10 e 11 (Árvores, Classes Abstratas, Recursos Avançados) |

---

## Como Compilar

```bash
# Qualquer exercício (exemplo)
g++ exercicios/aula09-poo/conta_bancaria.cpp -o conta_bancaria

# Projeto V1
g++ Projeto-Bolao-Copa-2026/bolaoversao1/bolaocopa1.cpp -o bolaocopa1
```

**Requisito:** GCC instalado ([MinGW-w64](https://www.mingw-w64.org/) no Windows).
