#include "bits/stdc++.h"
using namespace std;
int main(){
    int hi, mi, hf, mf;
    int md, hd;

    while(cin >> hi >> mi >> hf >> mf){
        if(hi==0&&mi==0&&hf==0&&mf==0) break;
        if(mf>=mi) md = mf-mi;
        else {
            md = (60-mi)+mf;
            hf-=1;
        }
        if(hf>hi) hd = hf-hi;
        else if(hf==hi&&md==0) hd = 24;
        else if(hf==hi&&md>0) hd = 0;
        else hd = (24-hi)+hf;

        md+=(hd*60);
        cout << md << endl;

    }
}