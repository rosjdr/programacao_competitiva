#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,total=0;
    cin >> n;
    if(n<=10) cout << 7 << endl;
    if(n>=11 && n<=30)  cout << 7+((n-10)*1) << endl;
    if(n>=31 && n<=100) cout << 7+20+((n-30)*2) << endl;
    if(n>=101) cout << 7+20+140+((n-100)*5) << endl;
}