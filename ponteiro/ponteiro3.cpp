#include <iostream>

using namespace std;


int main() {

    int auxiliar[4];

    cout << "Digite um número: ";
    cin >> *(auxiliar);
    cout << "Você digitou: " << auxiliar[0] << endl;

    cout << "\n";

    cout << "Digite outro número: ";
    cin >> *(auxiliar + 1);
    cout << "Você digitou: " << auxiliar[1] << endl;

    return 0;
}

    

    


  
