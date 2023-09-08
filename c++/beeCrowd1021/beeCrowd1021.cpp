#include "bits/stdc++.h"

using namespace std;

int main(){
    double n, resto;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda1c;
    cin >> n;
    //calcular notas
    nota100 = n/100;
    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    resto = n - (nota100*100);
    nota50 = resto/50;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    resto = resto - (nota50*50);
    nota20 = resto/20;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    resto = resto - (nota20*20);
    nota10 = resto/10;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    resto = resto - (nota10*10);
    nota5 = resto/5;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    resto = resto - (nota5*5);
    nota2 = resto/2;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    //calcular moedas
    resto = resto - (nota2*2);
    moeda1 = resto/1;
    cout << "MOEDAS:" << endl;
    cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
    resto = (resto - (moeda1))*100;
    moeda50 = resto/50;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    resto = resto - (moeda50*50);
    moeda25 = resto/25;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    resto = resto - (moeda25*25);
    moeda10 = resto/10;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    resto = resto - (moeda10*10);
    moeda5 = resto/5;
    cout << moeda5 << " moeda(s) de R$ 0.05" << endl;
    resto = resto - (moeda5*5);
    moeda1c = resto/1;
    cout << moeda1c << " moeda(s) de R$ 0.01" << endl;
}