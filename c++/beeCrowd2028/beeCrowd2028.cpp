#include "bits/stdc++.h"
using namespace std;
int main(){
    unsigned long long casos, n;
    casos=0;
    while(cin >> n){

        unsigned long long elementos = 0;
        //calcular total de elementos
        for(unsigned long long i=0;i<=n;i++) elementos+=i;
        elementos++; //soma um elemento que é o zero
        if(elementos==1) cout << "Caso " << ++casos << ": " << elementos << " numero" << endl;
        else cout << "Caso " << ++casos << ": " << elementos << " numeros" << endl;
        if(n==0) cout << 0;
        else cout << 0 << " ";
        for(unsigned long i=1;i<=n;i++){
            for(unsigned long j=1;j<=i;j++){
                if(i==n&&j==i) cout << i;
                else cout << i << " ";
            }
        }
        cout << endl << endl;
    }
}