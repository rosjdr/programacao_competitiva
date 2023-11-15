#include "bits/stdc++.h"
using namespace std;

int main(){
    int pos = 0;
    for(int i=0;i<6;i++){
        double n;
        cin >> n;
        if(n>0) pos++;
    }
    cout << pos << " valores positivos\n";
}