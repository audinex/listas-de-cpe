#include<iostream>
using namespace std;

int main (){    
    int menornum = 1, maiornum = 100, chute;
    char resp;
    cout << "pensei em um numero de 1 a 100 e irei advinhalo \nreponda com '>' se o numero for maior, se for menor responda com '<' e se for o seu numero digite '='" << endl;
    
    while (true){
        chute = menornum + (maiornum - menornum) / 2;
        cout << "o seu numero e: " << chute << "?\n";
        cin >> resp;

        if (resp == '='){
            cout << "advinhei" << endl;
            }else if (resp == '<'){
                maiornum = chute - 1;
            } else if (resp == '>'){
                menornum = chute + 1;
            }
        if (menornum > maiornum){
            cout << "seu numero nao esta entre";
        }
    }

    return 0;
