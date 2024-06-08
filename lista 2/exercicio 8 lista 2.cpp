#include <iostream>
#include <cmath> 
using namespace std;

int main() {

    double cateto1, cateto2, hipotenusa;


    cout << "primeiro cateto: ";
    cin >> cateto1;
    cout << "segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "a hipotenusa é: " << hipotenusa << endl;

    return 0;
}
