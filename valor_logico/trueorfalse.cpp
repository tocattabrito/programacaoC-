#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número diferente de 0 para\n";
    cout << "Verdadeiro ou 0 para falso:\n";
    int valor;
    cin >> valor;
    if(valor)
    {
        cout << "Verdadeiro\n";
    } else {
        cout << "Falso\n";
    }

    return 0;
}
