#include "bits/stdc++.h"

using namespace std;

int main(){
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a!=b && a!=c) cout << "A\n";
        if(c!=b && a!=c) cout << "C\n";
        if(a!=b && b!=c) cout << "B\n";
        if(a==b&&a==c) cout << "*\n";
    }
}