#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s,r;
        cin >> r >> s;
        if(r==s) cout << "empate" << endl;
        else{
            if((r=="tesoura" && s=="papel")||
               (r=="papel"   && s=="pedra")||
               (r=="pedra"   && s=="lagarto")||
               (r=="lagarto" && s=="spock")||
               (r=="spock"   && s=="tesoura")||
               (r=="tesoura" && s=="lagarto")||
               (r=="lagarto" && s=="papel")||
               (r=="papel"   && s=="spock")||
               (r=="spock"   && s=="pedra")||
               (r=="pedra"   && s=="tesoura")
               ) cout << "rajesh" << endl;
            else if (  (s=="tesoura" && r=="papel")||
                       (s=="papel"   && r=="pedra")||
                       (s=="pedra"   && r=="lagarto")||
                       (s=="lagarto" && r=="spock")||
                       (s=="spock"   && r=="tesoura")||
                       (s=="tesoura" && r=="lagarto")||
                       (s=="lagarto" && r=="papel")||
                       (s=="papel"   && r=="spock")||
                       (s=="spock"   && r=="pedra")||
                       (s=="pedra"   && r=="tesoura")
                        ) cout << "sheldon" << endl;
        }
    }
}