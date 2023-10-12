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
        string extenso = "";
        //decompor número em unidades
//        cout << "VALOR: " << valor << endl;
        int centenaMilhar = valor/100000;
//        cout << centenaMilhar << endl;
        valor = valor - (centenaMilhar * 100000);
//        cout << "VALOR: " << valor << endl;
        int dezenaMilhar = valor/10000;
//        cout << dezenaMilhar << endl;
        valor = valor - (dezenaMilhar * 10000);
//        cout << "VALOR: " << valor << endl;
        int unidadeMilhar = valor/1000;
//        cout << unidadeMilhar << endl;
        valor = valor - (unidadeMilhar*1000);
//        cout << "VALOR: " << valor << endl;
        int centena = valor/100;
//        cout << centena << endl;
        valor = valor - (centena*100);
//        cout << "VALOR: " << valor << endl;
        int dezena = valor/10;
//        cout << dezena << endl;
        valor = valor - (dezena*10);
//        cout << "VALOR: " << valor << endl;

        if(n==100000){
            extenso = "cem mil" ;
        } else if(n==10000) {
            extenso =  "dez mil" ;
        } else if(n==1000) {
            extenso =  "mil" ;
        } else if(n==100) {
            extenso = "cem" ;
        } else {
            if(centenaMilhar>0){
                extenso = centenas[centenaMilhar-1];
                if(dezenaMilhar>0 || unidadeMilhar>0){
                    if(dezenaMilhar>1){
                        extenso += " e " + dezenas[dezenaMilhar-2];
                        if(unidadeMilhar>0){
                            extenso+= " e " + numeros[unidadeMilhar] + " mil";
                        } else {
                            extenso+=" mil";
                        }
                    } else if(dezenaMilhar==0){
                        if(unidadeMilhar>0){
                            extenso+=" e "+numeros[unidadeMilhar]+" mil";
                        } else {
                            extenso+=" mil";
                        }
                    } else if(dezenaMilhar==1){
                        extenso+=" e "+dezAteDezenove[unidadeMilhar]+" mil";
                    }
                } else {
                    extenso+=" mil";
                }
                if(centena>0||dezena>0||valor>0) extenso+=" ";
            }
            if(centena>0){
                extenso+=centenas[centena-1];
            }
            if(dezena>1){
                if(extenso.length()>0)extenso+=" e "+dezenas[dezena-2];
                else extenso+=dezenas[dezena-2];
                if(valor>0){
                    extenso+=" e "+numeros[valor] ;
                }
            } else if(dezena == 1){
                if(extenso.length()>0)extenso+=" e "+dezAteDezenove[valor];
                else extenso+=dezAteDezenove[valor];
            } else if(dezena==0){
                if(n<=9) cout << numeros[n] ;
                else{
                    if(extenso.length()>0)extenso+=" e "+numeros[valor];
                }
            }
        }

        cout << extenso << endl;


//        if(valor==100000){
//            cout << "cem mil" << endl;
//        }else if(valor>=101&&valor<1000) {
//            cout << centenas[(valor / 100) - 1];
//            if (valor%100 != 0) {
//                valor = valor - (valor / 100 * 100);
//                cout << " e ";
//            } else {
//                cout << endl;
//            }
//        }
//        if(valor==100){
//            cout << "cem" << endl;
//        }
//        else if(valor<10){
//            cout << numeros[valor] << endl;
//        }
//        else if(valor>=10&&valor<20)
//            cout << dezAteDezenove[valor%10] << endl;
//        else if(valor>=20&&valor<100){
//            cout << dezenas[(valor/10)-2];
//            if(valor%10!=0){
//                cout << " e " << numeros[valor%10] << endl;
//            } else {
//                cout << endl;
//            }
//        }
    }
}