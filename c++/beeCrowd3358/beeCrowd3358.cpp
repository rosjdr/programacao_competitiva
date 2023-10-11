#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string vogais = "aeiou";
        string sobrenome;
        cin >> sobrenome;
        int consoantesConsecutivas = 0;
        for(int j=0;j<sobrenome.length();j++){
            char c = (char) tolower(sobrenome[j]);
            if(vogais.find(c)==-1){
                consoantesConsecutivas++;
            } else {
                consoantesConsecutivas = 0;
            }
            if(consoantesConsecutivas>=3)
                break;
        }
        if(consoantesConsecutivas>=3)
            cout << sobrenome << " nao eh facil" << endl;
        else
            cout << sobrenome << " eh facil" << endl;
    }
}
