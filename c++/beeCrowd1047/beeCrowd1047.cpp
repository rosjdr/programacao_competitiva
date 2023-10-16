#include "bits/stdc++.h"
using namespace std;
int main(){
    int hi, mi, hf, mf;
    int hd, md;
    cin >> hi >> mi >> hf >> mf;

    if(mf>=mi) md = mf-mi;
    else {
        md = (60-mi)+mf;
        hf-=1;
    }
    if(hf>hi) hd = hf-hi;
    else if(hf==hi&&md==0) hd = 24;
    else if(hf==hi&&md>0) hd = 0;
    else hd = (24-hi)+hf;

    cout << "O JOGO DUROU " << hd << " HORA(S) E " << md << " MINUTO(S)" << endl;
}