#include <iostream>

using namespace std;

int main() {
    string senha;

    cout << "Digite a senha: ";
    cin >> senha;

    if (senha != "1234") {
        cout << "Senha incorreta!" << endl;
    } else {
        cout << "Senha correta!" << endl;
    }

    return 0;
}