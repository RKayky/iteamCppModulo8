#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Voce tem " << idade << " anos " << endl;

    double pi = 3.14159265;
    cout << setprecision(8) << pi << endl;
    cout << fixed << setprecision(2) << pi << endl;

    system("pause");
}