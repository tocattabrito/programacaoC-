#include <iostream>

using namespace std;


int main() {

    int *auxiliar = new int[4];

    cout << "Digite um número: ";
    cin >> *(auxiliar);
    cout << "Você digitou: " << *(auxiliar) << endl;

    cout << "\n";

    cout << "Digite outro número: ";
    cin >> *(auxiliar + 1);
    cout << "Você digitou: " << *(auxiliar + 1) << endl;

    delete[] auxiliar; // liberar memoria

    auxiliar = NULL;

    return 0;
}

    

    


  
