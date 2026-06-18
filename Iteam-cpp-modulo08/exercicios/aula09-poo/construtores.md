# Construtores em C++

## O que é um Construtor?

O construtor é um **método especial da classe** em C++ que é executado automaticamente quando criamos um novo objeto. Ele serve para **inicializar os atributos da instância** e alocar os recursos necessários.

### Características principais

- Tem o **mesmo nome da classe**
- **Não tem tipo de retorno** (nem `void`)
- É chamado **automaticamente** no momento do `new` ou da declaração do objeto
- Uma classe pode ter **múltiplos construtores** (sobrecarga)

---

## Exemplo — Classe Cachorro (com `private`)

Na aula a professora mostrou os atributos no bloco `private:` — isso é **encapsulamento**: os dados ficam protegidos e só podem ser acessados de fora através dos métodos públicos.

```cpp
#include <iostream>
using namespace std;

class Cachorro {
private:
    std::string nome;
    std::string raca;
    int idade;

public:
    // Construtor: inicializa os atributos privados
    Cachorro(std::string nome, std::string raca, int idade) {
        this->nome  = nome;
        this->raca  = raca;
        this->idade = idade;
    }

    void latir() {
        cout << nome << " diz: Au Au!" << endl;
    }

    void exibir() {
        cout << "Nome: "  << nome  << endl;
        cout << "Raca: "  << raca  << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }
};

int main() {
    // O construtor e chamado aqui automaticamente
    Cachorro dog1("Rex",   "Pastor Alemao", 3);
    Cachorro dog2("Bolinha", "Poodle",      5);

    dog1.exibir();
    dog1.latir();

    cout << endl;

    dog2.exibir();
    dog2.latir();

    return 0;
}
```

### Saída esperada

```
Nome: Rex
Raca: Pastor Alemao
Idade: 3 anos
Rex diz: Au Au!

Nome: Bolinha
Raca: Poodle
Idade: 5 anos
Bolinha diz: Au Au!
```

---

## Por que usar `private`?

| Sem `private` (tudo `public`) | Com `private` |
|-------------------------------|---------------|
| Qualquer código pode alterar `dog.nome = ""` direto | Só os métodos da classe podem mexer nos atributos |
| Sem controle de dados inválidos | Você valida dentro dos métodos (ex: impedir idade negativa) |
| Menos seguro | **Encapsulamento** — boa prática em POO |

```cpp
// SEM private: isso seria possivel (perigoso)
dog1.idade = -99;

// COM private: isso gera erro de compilacao
// dog1.idade = -99;  // ERROR: 'idade' is private
```

---

## O que é `this`?

O `this` é um ponteiro que aponta para o **objeto atual**. É usado quando o nome do parâmetro é igual ao nome do atributo para diferenciar os dois:

```cpp
Cachorro(string nome, string raca, int idade) {
    this->nome  = nome;   // this->nome = atributo da classe
                          //       nome = parametro recebido
}
```

---

## Construtor Padrão (sem parâmetros)

Se nenhum construtor for definido, C++ cria um automaticamente sem parâmetros. Mas assim que você define um construtor com parâmetros, o padrão deixa de existir automaticamente.

```cpp
class Cachorro {
public:
    string nome;

    Cachorro() {           // construtor padrao (sem parametros)
        nome = "Sem nome";
    }

    Cachorro(string nome) { // construtor com parametro
        this->nome = nome;
    }
};
```

---

## Resumo

| Conceito | Descrição |
|----------|-----------|
| Nome | Igual ao nome da classe |
| Retorno | Nenhum (nem void) |
| Quando executa | Automaticamente ao criar o objeto |
| Para que serve | Inicializar atributos |
| `this` | Ponteiro para o objeto atual |
| Sobrecarga | Pode ter múltiplos construtores com parâmetros diferentes |
