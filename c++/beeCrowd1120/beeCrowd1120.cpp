#include "bits/stdc++.h"

using namespace std;

int main(){
    char d;
    string n;
    cin >> d;
    cin >> n;
    while(d!='0' && n!="0"){
        string nova = "0";
        for(int i=0;i < n.length();i++){
            if(n[i] != d){
                nova+=n[i];
            }
        }
        while(nova.length()>0 && nova[0]=='0'){
            nova = nova.substr(1);
        }

        if(nova.length()==0)
            cout << 0 << endl;
        else
            cout << nova << endl;

        cin >> d >> n;
    }

}