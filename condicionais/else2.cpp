#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um numero maior que zero\n";
    int valor;
    cin >> valor;
    if (valor > 0)
    {
        cout << "Certo\n";
        cout << "Você digitou " << valor << "!\n";
    } else {
        cout << "Errado\n";
        cout << "Você digitou " << valor << "!\n";
    }

    return 0;
}
