#include "bits/stdc++.h"

using namespace std;

int main(){
    int tpares = 0;
    int timpares = 0;
    int tpos = 0;
    int tneg = 0;
    for(int i=0;i<5;i++){
        int x;
        cin >> x;
        if(x>0) tpos++;
        if(x<0) tneg++;
        if(x%2==0) tpares++;
        else timpares++;
    }
    cout << tpares << " valor(es) par(es)" << endl;
    cout << timpares << " valor(es) impar(es)" << endl;
    cout << tpos << " valor(es) positivo(s)" << endl;
    cout << tneg << " valor(es) negativo(s)" << endl;
}