#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string linha;
        cin >> linha;
        string numeros[3];
        numeros[0] = linha.substr(2,2);
        numeros[1] = linha.substr(5,3);
        numeros[2] = linha.substr(11,2);
        cout << stoi(numeros[0])+stoi(numeros[1])+stoi(numeros[2]) << endl;
    }
}