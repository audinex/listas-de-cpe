#include <iostream>
using namespace std;

int main() {
    
    int numero1, numero2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> numero1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> numero2;

    if (numero1 % numero2 == 0) {
        cout << numero1 << " � um multiplo de " << numero2 << endl;
    } else {
        cout << numero1 << " n�o � um multiplo de " << numero2 << endl;
    }

    return 0;
}
