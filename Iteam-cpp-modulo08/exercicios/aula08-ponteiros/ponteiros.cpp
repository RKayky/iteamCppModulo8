#include <iostream>
using namespace std;

// Troca usando ponteiros (sem variavel auxiliar)
void trocarPonteiros(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Alocacao dinamica com new/delete
void alocacaoDinamica() {
    int* ptr = new int;
    *ptr = 42;
    cout << "Valor alocado dinamicamente: " << *ptr << endl;
    cout << "Endereco na memoria:         " << ptr  << endl;
    delete ptr;
    ptr = nullptr;
}

// Ponteiro nullable como parametro seguro
void imprimirSeValido(int* ptr) {
    if (ptr != nullptr) {
        cout << "Valor: " << *ptr << endl;
    } else {
        cout << "Ponteiro nulo — sem valor para exibir." << endl;
    }
}

int main() {
    // Exercicio 1 — troca sem variavel auxiliar
    cout << "=== Troca com Ponteiros ===" << endl;
    int a = 10, b = 20;
    cout << "Antes:  a=" << a << "  b=" << b << endl;
    trocarPonteiros(&a, &b);
    cout << "Depois: a=" << a << "  b=" << b << endl;

    // Exercicio 2 — alocacao dinamica
    cout << "\n=== Alocacao Dinamica ===" << endl;
    alocacaoDinamica();

    // Exercicio 3 — ponteiro nullable
    cout << "\n=== Ponteiro Nullable ===" << endl;
    int valor = 99;
    int* pValido  = &valor;
    int* pNulo    = nullptr;
    imprimirSeValido(pValido);
    imprimirSeValido(pNulo);

    // Bonus — aritmetica de ponteiros com array
    cout << "\n=== Aritmetica de Ponteiros ===" << endl;
    int numeros[5] = {10, 20, 30, 40, 50};
    int* p = numeros;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << *(p + i) << endl;
    }

    return 0;
}
