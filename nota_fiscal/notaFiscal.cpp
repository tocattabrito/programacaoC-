#include <iostream>


using namespace std;

// Funções
void informacao()
{
    cout << "" << endl;
    cout << "Imãos Silva Supermecados Ltda " << endl;
    cout << "CNPJ: 11.023.654 / 0001 - 09 " << endl;
    cout << "IE: 028998758 FONE:(81) 3485-2356" << endl;
    cout << "Rua dos coqueiros, 367, Candeias,\nJABOATÃO DOS GUARARAPES, PERNAMBUCO \n"
         << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "DOCUMENTO AUXILIAR DA NOTA FISCAL DE CONSUMIDOR \nELETRONICA\n"
         << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "" << endl;
}
    
void cadastroProduto()
{
    cout << "+---------------------------------------------+" << endl;
    cout << "+ CADASTRO DE PRODUTOS                        +" << endl;
    cout << "+---------------------------------------------+" << endl;



}

    int codigo;
    string descricao;
    double valorUnitario;
    int quantidade;

int main(int argc, char const *argv[])
{
    cadastroProduto();
    // informacao();

    // Cadastro de produtos
    cout << "Informe o código do produto: " << endl;
    cin >> codigo;
    cout << "Digite a descrição do produto: " << endl;
    cin >> descricao;
    cout << "Informe o valor unitário: " << endl;
    cin >> valorUnitario;
    cout << "Digite a quantidade:" << endl;
    cin >> quantidade;
    return 0;
}
    
