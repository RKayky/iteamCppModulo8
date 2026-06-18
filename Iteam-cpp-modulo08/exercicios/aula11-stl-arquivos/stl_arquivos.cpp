#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

// Template: retorna o maior entre dois valores (funciona com qualquer tipo)
template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // --- Template ---
    cout << "=== Template ===" << endl;
    cout << "maior(3, 7) = "        << maior(3, 7)         << endl;
    cout << "maior(4.5, 2.1) = "    << maior(4.5, 2.1)     << endl;
    cout << "maior('a', 'z') = "    << maior('a', 'z')      << endl;

    // --- STL: vector ---
    cout << "\n=== STL — vector ===" << endl;
    vector<int> notas = {72, 45, 91, 60, 88, 33};

    cout << "Notas originais: ";
    for (int n : notas) cout << n << " ";
    cout << endl;

    sort(notas.begin(), notas.end());
    cout << "Notas ordenadas: ";
    for (int n : notas) cout << n << " ";
    cout << endl;

    auto it = find(notas.begin(), notas.end(), 91);
    if (it != notas.end())
        cout << "Nota 91 encontrada na posicao: " << (it - notas.begin()) << endl;

    notas.push_back(100);
    cout << "Apos push_back(100): " << notas.back() << " adicionado." << endl;

    // --- fstream: escrita ---
    cout << "\n=== fstream — Escrita ===" << endl;
    ofstream arquivo("notas.txt");
    if (arquivo.is_open()) {
        for (int n : notas) arquivo << n << "\n";
        arquivo.close();
        cout << "Notas salvas em notas.txt" << endl;
    }

    // --- fstream: leitura ---
    cout << "\n=== fstream — Leitura ===" << endl;
    ifstream leitura("notas.txt");
    int valor;
    cout << "Notas lidas do arquivo: ";
    while (leitura >> valor) cout << valor << " ";
    cout << endl;
    leitura.close();

    return 0;
}
