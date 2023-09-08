#include "bits/stdc++.h"
using namespace std;
int main(){
    double v;
    cin >> v;
    if(v>=0&&v<=25) cout << "Intervalo [0,25]\n";
    else if(v>25&&v<=50) cout << "Intervalo (25,50]\n";
    else if(v>50&&v<=75) cout << "Intervalo (50,75]\n";
    else if(v>75&&v<=100) cout << "Intervalo (75,100]\n";
    else cout << "Fora de intervalo\n";
}