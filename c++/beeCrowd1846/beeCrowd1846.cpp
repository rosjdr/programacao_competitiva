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
        string extenso = ""; //começar o número por extenso vazio
        //decompor o número
        int centenaMilhar = valor/100000;
        valor = valor - (centenaMilhar * 100000);
        int dezenaMilhar = valor/10000;
        valor = valor - (dezenaMilhar * 10000);
        int unidadeMilhar = valor/1000;
        valor = valor - (unidadeMilhar*1000);
        int centena = valor/100;
        valor = valor - (centena*100);
        int dezena = valor/10;
        valor = valor - (dezena*10);

        //escrever o número
        if(n==100000){
            extenso = "cem mil" ;
        } else if(n==10000) {
            extenso =  "dez mil" ;
        } else if(n==1000) {
            extenso =  "mil" ;
        } else if(n==100) {
            extenso = "cem" ;
        } else if(n==0) {
            extenso = "zero";
        } else {
            //escreve se o número tiver casa de centena de milhar
            if(centenaMilhar>0){
                if(centenaMilhar==1&&dezenaMilhar==0&&unidadeMilhar==0) extenso="cem";
                else extenso = centenas[centenaMilhar-1];
            }
            //verifica se tem dezena de milhar e escreve
            if(dezenaMilhar==1){
                if(extenso.length()>0) extenso+=" e "+dezAteDezenove[unidadeMilhar];
                else extenso = dezAteDezenove[unidadeMilhar];
            } else if(dezenaMilhar>1){
                if(extenso.length()>0) extenso+=" e "+dezenas[dezenaMilhar-2];
                else extenso = dezenas[dezenaMilhar-2];
            }
            //verifica se tem unidade de milhar e escreve
            if (unidadeMilhar>0&&dezenaMilhar!=1){
                if(extenso.length()==0 && unidadeMilhar==1) extenso+="mil";
                else if(extenso.length()>0) extenso+= " e " + numeros[unidadeMilhar];
                else extenso = numeros[unidadeMilhar];
            }

            if(!equal(extenso.begin(), extenso.end(),"mil")&&extenso.length()>0) extenso+=" mil"; //se tiver alguma coisa inclui a palavra mil

            if(centena>0){
                if(centena==1&&dezena==0&&valor==0){
                    if(extenso.length()>0) extenso+=" e cem";
                    else extenso+="cem";
                } else if (extenso.length() > 0){
                    if(dezena==0&&valor==0) extenso += " e " + centenas[centena-1];
                    else extenso += " " + centenas[centena-1];
                } else extenso+=centenas[centena-1];
            }
            if(dezena == 1) {
                if (extenso.length() > 0) extenso += " e " + dezAteDezenove[valor];
                else extenso += dezAteDezenove[valor];
            } else if (dezena > 1){
                if(extenso.length()>0)extenso+=" e "+dezenas[dezena-2];
                else extenso+=dezenas[dezena-2];
            }
            if(valor>0&&dezena!=1) {
                if(extenso.length()>0)extenso+=" e "+numeros[valor];
                else extenso+=numeros[valor];
            }
        }

        cout << extenso << endl;
    }
}