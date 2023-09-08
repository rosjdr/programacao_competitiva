#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,ant,atual;
    cin >> n;
    cout << "0 1";
    ant = 0;
    atual = 1;
    for(int i=2;i<n;i++){
        int aux = atual;
        atual+=ant;
        ant = aux;
        cout << " " << atual;
    }
    cout << endl;
}