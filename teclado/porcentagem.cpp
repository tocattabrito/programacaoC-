#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double val1, val2;

    cout << "Digite quantos % você deseja: ";
    cin >> val1;

    cout << "\nDigite o valor: ";
    cin >> val2;

    cout << val1 << "% de " << val2 << " é " << (val2 / 100) * val1 << "!\n\n";

    return 0;
}
