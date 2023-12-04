#include <iostream>

using namespace std;

// funções

void cabecalho ()
{
    cout << "" << endl;
    cout << "Imãos Silva Supermecados Ltda " << endl;
    cout << "CNPJ:  11.023.654 / 0001 - 09 " << endl;
    cout << "IE: 028998758 FONE:(81) 3485-2356"<< endl;
    cout << "Rua dos coqueiros, 367, Candeias,\nJABOATÃO DOS GUARARAPES, PERNAMBUCO \n" << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "DOCUMENTO AUXILIAR DA NOTA FISCAL DE CONSUMIDOR \nELETRONICA\n" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "" << endl;
}

void lista()
{
    cout << "CODIGO       DESCRICAO QTDE UN VL.UNIT VL.TOTAL" << endl;
}

void itensLista()
{
    
}

int main(int argc, const char** argv) {

    // variáveis
    int qtde, cod;
    double total;

    

    cabecalho();
    lista();

    cout << "Digite o código do produto: " << endl;
    cin >> cod;

    return 0;
}