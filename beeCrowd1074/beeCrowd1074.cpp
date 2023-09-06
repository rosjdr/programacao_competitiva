#include "bits/stdc++.h"

using namespace std;

int main(){
    long valor, n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> valor;
        if(valor==0)
            cout << "NULL\n";
        else {
            valor%2==0?cout << "EVEN ":cout << "ODD ";
            valor>0?cout << "POSITIVE\n":cout << "NEGATIVE\n";
        }
    }
}
