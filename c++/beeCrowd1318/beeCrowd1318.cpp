#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    while(n!=0 && m!=0){
        map<int,int> entradas;
        //inicializar o vetor com 0 bilhetes
        for(int i=1;i<=n;i++) entradas[i] = 0;

        //conta cada bilhete
        for(int i=0;i<m;i++){
            int p;
            cin >> p;
            entradas[p]++;
        }

        //calcula a quantidade de bilhetes repetidos
        int repetidos = 0;
        for(int i=1;i<=n;i++){
            if(entradas[i]>1) repetidos++;
        }

        cout << repetidos << endl;
        cin >> n >> m;
    }
}