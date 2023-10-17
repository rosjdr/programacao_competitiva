#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a>=b) a%b==0?cout << "Sao Multiplos\n":cout << "Nao sao Multiplos\n";
    else b%a==0?cout << "Sao Multiplos\n":cout << "Nao sao Multiplos\n";
}