#include <iostream>
using namespace std;

class Cachorro {
private:
    std::string nome;

public:
    Cachorro(std::string nome){
        this->nome = nome;
    }

    void latir() {
        std::cout << nome << " diz: Au Au!" << std::endl;
    }
};

int main() {
    Cachorro c1("Zeus");
    Cachorro c2("Odisseu");

    c1.latir(); 
    c2.latir();

return 0;
}