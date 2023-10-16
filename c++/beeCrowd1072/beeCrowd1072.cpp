#include "bits/stdc++.h"
using namespace std;
int main(){
    long n,v;
    cin >> n;
    int in = 0;
    int out = 0;
    for(long i=0;i<n;i++){
        cin >> v;
        if(v>=10&&v<=20) in++;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}