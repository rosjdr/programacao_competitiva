#include "bits/stdc++.h"
using namespace std;
int main(){
    int cha, chute;
    int acertos = 0;
    cin >> cha;
    for(int i=0;i<5;i++){
        cin >> chute;
        chute==cha?acertos++:acertos=acertos;
    }
    cout << acertos << endl;
}