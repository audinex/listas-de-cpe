#include <iostream>
using namespace std;

int main() {
  
    cout << "Primeiro padr�o:" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\nSegundo padr�o:" << endl;
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\nTerceiro padr�o:" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int k = 5 - i; k > 0; --k) {
            cout << "  "; // Adiciona espa�os
        }
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\nQuarto padr�o:" << endl;
    for (int i = 5; i >= 1; --i) {
        for (int k = 5 - i; k > 0; --k) {
            cout << "  "; // Adiciona espa�os
        }
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}
