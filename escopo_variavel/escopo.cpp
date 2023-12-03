#include <iostream>

using namespace std;
// variável global
int num_global = 12;

void foo()
{
    // variável local
    int num = 10;
    static int num_static = 1; // Ideal para armazenar quantas vezes a função foi chamada

    cout << "variável estatica: " << num_static << endl;
    cout << "variável local: " << num << endl;
    cout << "variável global: " << num_global << endl;

    num_static++;

    cout << "variável estatica: " << num_static << endl;
}

int main(int argc, char const *argv[])
{
    foo();
    foo();
    foo();
    return 0;
}
