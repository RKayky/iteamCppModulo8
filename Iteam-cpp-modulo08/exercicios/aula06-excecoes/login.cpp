#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    const string LOGIN = "admin";
    const string SENHA = "1234";
    string login, senha;
    int tentativas = 0;

    while (tentativas < 3) {
        cout << "Login: ";
        cin >> login;
        cout << "Senha: ";
        cin >> senha;

        try {
            if (login.empty() || senha.empty())
                throw runtime_error("Login e senha nao podem ser vazios.");

            if (login == LOGIN && senha == SENHA) {
                cout << "Acesso autorizado!\n";
                return 0;
            } else {
                tentativas++;
                cout << "Credenciais invalidas. Tentativas restantes: " << (3 - tentativas) << "\n";
            }

        } catch (const exception& e) {
            cout << "Erro: " << e.what() << "\n";
        }
    }

    cout << "Acesso bloqueado!\n";
    return 1;
}
