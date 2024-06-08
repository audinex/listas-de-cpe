#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Digite cinco n�meros entre 1 e 30:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] < 1 || numeros[i] > 30) {
            cout << "Por favor, digite um n�mero entre 1 e 30." << endl;
            --i; 
        }
    }

    cout << "\nBarras de asteriscos:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "N�mero " << i + 1 << ": ";

        for (int j = 0; j < numeros[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
