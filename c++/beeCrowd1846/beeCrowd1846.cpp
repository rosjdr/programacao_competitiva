#include "bits/stdc++.h"
using namespace std;
int main(){
    string numeros[10] = {
            "zero",
            "um",
            "dois",
            "tres",
            "quatro",
            "cinco",
            "seis",
            "sete",
            "oito",
            "nove"
    };

    string dezAteDezenove[10] = {
            "dez",
            "onze",
            "doze",
            "treze",
            "quatorze",
            "quinze",
            "dezesseis",
            "dezessete",
            "dezoito",
            "dezenove"
    };

    string dezenas[8] = {
            "vinte",
            "trinta",
            "quarenta",
            "cinquenta",
            "sessenta",
            "setenta",
            "oitenta",
            "noventa"
    };

    string centenas[9] = {
            "cento",
            "duzentos",
            "trezentos",
            "quatrocentos",
            "quinhentos",
            "seiscentos",
            "setecentos",
            "oitocentos",
            "novecentos"
    };

    long n;
    while(cin >> n){
        long valor = n;
        if(valor==100000){
            cout << "cem mil" << endl;
        }else if(valor>=101&&valor<1000) {
            cout << centenas[(valor / 100) - 1];
            if (valor%100 != 0) {
                valor = valor - (valor / 100 * 100);
                cout << " e ";
            } else {
                cout << endl;
            }
        }
        if(valor==100){
            cout << "cem" << endl;
        }
        else if(valor<10){
            cout << numeros[valor] << endl;
        }
        else if(valor>=10&&valor<20)
            cout << dezAteDezenove[valor%10] << endl;
        else if(valor>=20&&valor<100){
            cout << dezenas[(valor/10)-2];
            if(valor%10!=0){
                cout << " e " << numeros[valor%10] << endl;
            } else {
                cout << endl;
            }
        }
    }
}