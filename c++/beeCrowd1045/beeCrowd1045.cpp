#include "bits/stdc++.h"

using namespace std;

int main(){
    double a,b,c,aux;
    cin >> a >> b >> c;
    //coloca o maior lado em a
    if(b>a){
        aux=a;
        a=b;
        b=aux;
    }
    if(c>a){
        aux=a;
        a=c;
        c=aux;
    }
    if(a>=b+c) cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if((a*a)==(b*b+c*c)) cout << "TRIANGULO RETANGULO" << endl;
        if(a*a>b*b+c*c) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a*a<b*b+c*c) cout << "TRIANGULO ACUTANGULO" << endl;
        if(a==b&&b==c) cout << "TRIANGULO EQUILATERO" << endl;
        else if(a==b||a==c||b==c) cout << "TRIANGULO ISOSCELES" << endl;
    }
}