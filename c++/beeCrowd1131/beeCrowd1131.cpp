#include "bits/stdc++.h"
using namespace std;
int main(){
    int gi, gg, r;
    cin >> gi >> gg >> r;
    int total = 0;
    int vi = 0;
    int vg = 0;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    while(r!=2){
        if(gi>gg) vi++;
        else if(gg>gi) vg++;
        total++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> gi >> gg >> r;
    }
    if(gi>gg) vi++;
    else if(gg>gi) vg++;
    total++;
    cout << total << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << total-(vg+vi) << endl;
    if(vi>vg) cout << "Inter venceu mais" << endl;
    else if(vg>vi) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
}