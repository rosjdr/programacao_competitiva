#include "bits/stdc++.h"

using namespace std;

int main(){
    int q,d,p;
    cin >> q;
    while(q!=0){
        cin >> d >> p;
        //supor que o total de dias é t então (q*t) = (t-d)*p => qt = pt - pd => pt - qt = pd => t = pd/(p-q)
        double t =  1.0*(p*d)/(p-q); //se não colocar o 1.0 dá erro de arredondamento
        int n = t*q;
        cout << n;
        n==1?cout << " pagina\n":cout << " paginas\n";
        cin >> q;
    }
}