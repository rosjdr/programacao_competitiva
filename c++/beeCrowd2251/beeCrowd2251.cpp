#include "bits/stdc++.h"

using namespace std;

int main(){
    int n, contTeste =0;
    cin >> n;
    while(n!=0){
        cout << "Teste " << ++contTeste << endl << (long)pow(2,n)-1 << endl << endl;
        cin >> n;
    }
}