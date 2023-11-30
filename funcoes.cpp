#include <iostream>

using namespace std;

// função que verifica se um número é par ou impar
bool par (int num)
{
    if (num % 2 == 0){
        return true;
    } else {
         return false;
    } 
}

// função void
void titulo()
{
    cout << "\n";
    cout << "======= Aprendendo C++ ======= " << endl;
    cout << "\n";
}

void mensagem()
{
    cout << "===============================" << endl;
    //cout << "\n" << endl;
    cout << "Mensagem: \n" << endl;
}

// função principal
int main(int argc, const char** argv) {
   
    int n;

    // Chamado a função titulo
    titulo();

    cout << "Digite um número: ";
    cin >> n;
    cout << "\n" << endl;
   
    mensagem();

    // Processamento
    if (par(n)) {
        // Saída
        cout << "O número " << n << " eh par. " << endl;
        cout << "\n";
    }
    else
    {
        // Saída
        cout << "O número " << n << " eh impar." << endl;
        cout << "\n";
    }

    return 0;
}