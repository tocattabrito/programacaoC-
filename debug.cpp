#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    
    int ano, idade;

    cout << "Digite o ano de nascimento: " << endl;
    cin >> ano;

    idade = 2023 - ano;

    cout << "Idade: " << idade << endl;
    return 0;
}