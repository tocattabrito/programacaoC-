#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número positivo: \n";
    int valor;
    cin >> valor;

    if (valor >= 0)
    {
        cout << "Certo!\n";
        cout << "Esta é a segunda chamada de função!\n";
        cout << "Você pode dar qualquer comando aqui!\n";
    }

    if (valor < 0)
    {
        cout << "Errado!\n";
    }
    
    return 0;
}
