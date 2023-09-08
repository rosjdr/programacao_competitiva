#include "bits/stdc++.h"

using namespace std;

int main(){
    int valor, maior = 0, pos;

    for(int i=0; i<100; i++){
        cin >> valor;
        if(valor > maior){
            maior = valor;
            pos = i+1;
        }
    }
    cout << maior << endl << pos << endl;
}