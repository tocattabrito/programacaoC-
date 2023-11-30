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

// Função Principal
int main(int argc, char const *argv[])
{
    mensagem(19);
    mensagem();
    return 0;
}
