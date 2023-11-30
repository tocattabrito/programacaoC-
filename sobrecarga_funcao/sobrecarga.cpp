#include <iostream>

using namespace std;
// Funções
void mensagem (int n)
{
    cout << "número: " << n << endl;
}

void mensagem()
{
    cout << "hello world" << endl;
}

int soma(int n1, int n2 )
{
    return n1 + n2;
}

int soma(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

// Função Principal
int main(int argc, char const *argv[])
{
    mensagem(19);
    mensagem();

    cout << soma(1, 2) << endl;
    cout << soma(1, 2, 3) << endl;
    return 0;
}
