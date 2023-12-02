#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int n = 5;

    cout << "Fatorial de  " << n << ": " << fatorial(n) << endl;

    cout << "Area do quadrado de lado " << n << " eh: " << area_quadrado(n) << endl;

    cout << "Area do retangulo " << area_retangulo(n, n) << endl;
    return 0;
}
