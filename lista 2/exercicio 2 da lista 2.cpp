#include <iostream>
using namespace std;

int main() {
    
    double numero1, numero2;

   
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

   
    double soma = numero1 + numero2;
    cout << "Soma: " << soma << endl;

    double produto = numero1 * numero2;
    cout << "Produto: " << produto << endl;

   
    double diferenca = numero1 - numero2;
    cout << "Diferen�a: " << diferenca << endl;

    
    if (numero2 != 0) {
    
        double quociente = numero1 / numero2;
        cout << "Quociente: " << quociente << endl;
    } else {
        cout << "N�o � poss�vel dividir por zero." << endl;
    }

    return 0;
}
