#include <iostream>
using namespace std;

// Passagem por valor (nao altera os originais)
int somarValor(int a, int b) {
    return a + b;
}

// Passagem por referencia (altera os originais)
void trocar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Sobrecarga: mesma funcao para double
double somarValor(double a, double b) {
    return a + b;
}

// Recursividade: fatorial
int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    // Passagem por valor
    cout << "=== Passagem por Valor ===" << endl;
    cout << "Soma de 4 + 6 = " << somarValor(4, 6) << endl;
    cout << "Soma de 1.5 + 2.5 = " << somarValor(1.5, 2.5) << endl;

    // Passagem por referencia
    int x = 7, y = 9;
    cout << "\n=== Passagem por Referencia ===" << endl;
    cout << "Antes: x=" << x << "  y=" << y << endl;
    trocar(x, y);
    cout << "Depois: x=" << x << "  y=" << y << endl;

    // Recursividade
    cout << "\n=== Recursividade — Fatorial ===" << endl;
    for (int i = 1; i <= 7; i++) {
        cout << i << "! = " << fatorial(i) << endl;
    }

    return 0;
}
