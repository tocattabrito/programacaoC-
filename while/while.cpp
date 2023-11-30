#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    
    int n = 1;

    while (n <= 100)
    {
        // if (n > 50) // o programa irá imprimir na tela até o número 50
        // {
        //     break;
        // }
        // cout << n << endl;
        // n++;
        
        if( n % 2 != 0) // o programa imprime os  números pares
        {
            n++;
            continue;
        }
        cout << n << endl;
        n++;
    }
    return 0;
}