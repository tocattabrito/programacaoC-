#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número deferente de 0 para \n";
    cout << "Verdadeiro ou 0 para falso\n";
    int valor;
    cin >> valor;
    if(!valor){
        cout << "Falso\n";
    } else {
        cout << "Verdadeiro\n";
    }
    return 0;
}
