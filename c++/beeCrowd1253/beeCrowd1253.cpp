#include "bits/stdc++.h"
using namespace std;
int main(){
    string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string frase;
        string traducao = "";
        int chave;
        cin >> frase;
        cin >> chave;
        for(int i=0;i<frase.length();i++){
            int caractere = frase[i];
            if(caractere-chave < 65){
                traducao+=(91-chave)+caractere-65;
            } else {
                traducao+=(caractere-chave);
            }
        }
        cout << traducao << endl;
    }
}