#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char valor;
    cout << "Digite \'A\':\n";
    cin >> valor;
    switch (valor)
    {
    case 'a':
        cout << "Certo!\n";
        break;
    case 'A':
        cout << "Certo!\n";
        break;
    default:
        cout << "Errado!\n";
        break;
    }
    return 0;
}
