#include <iostream>
using namespace std;

int main() {
    const double preco_produto1 = 2.98;
    const double preco_produto2 = 4.50;
    const double preco_produto3 = 9.98;
    const double preco_produto4 = 4.49;
    const double preco_produto5 = 6.87;

    int numero_produto;
    int quantidade;
    double total_venda = 0;

    while (true) {
        cout << "Digite o n�mero do produto (1-5, ou 0 para sair): ";
        cin >> numero_produto;

        if (numero_produto == 0) {
            break;
        }

        cout << "Digite a quantidade vendida: ";
        cin >> quantidade;


        switch (numero_produto) {
            case 1:
                total_venda += preco_produto1 * quantidade;
                break;
            case 2:
                total_venda += preco_produto2 * quantidade;
                break;
            case 3:
                total_venda += preco_produto3 * quantidade;
                break;
            case 4:
                total_venda += preco_produto4 * quantidade;
                break;
            case 5:
                total_venda += preco_produto5 * quantidade;
                break;
            default:
                cout << "N�mero de produto inv�lido. Por favor, digite um n�mero de 1 a 5." << endl;
                break;
        }
    }

 
    cout << "O total de vendas �: R$ " << total_venda << endl;

    return 0;
}
