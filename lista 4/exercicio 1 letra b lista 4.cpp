#include <iostream>

double calcularE(int n) {
    double e = 1.0;
    double termo = 1.0;

    for (int i = 1; i <= n; ++i) {
        termo /= i;
        e += termo;
    }

    return e;
}

int main() {
    int precisao;
    std::cout << "Digite a precis�o desejada para o c�lculo da constante e: ";
    std::cin >> precisao;

    double valorE = calcularE(precisao);
    std::cout << "O valor de e � aproximadamente: " << valorE << std::endl;

    return 0;
}
