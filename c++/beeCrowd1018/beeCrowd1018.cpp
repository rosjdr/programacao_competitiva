#include "bits/stdc++.h"

using namespace std;

int main(){
    int n, resto;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    cin >> n;
    //calcular notas
    cout << n << endl;
    nota100 = n/100;
    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    resto = n - (nota100*100);
    nota50 = resto/50;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    resto = resto - (nota50*50);
    nota20 = resto/20;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    resto = resto - (nota20*20);
    nota10 = resto/10;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    resto = resto - (nota10*10);
    nota5 = resto/5;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    resto = resto - (nota5*5);
    nota2 = resto/2;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    resto = resto - (nota2*2);
    nota1 = resto/1;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;
}