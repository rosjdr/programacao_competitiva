#include "bits/stdc++.h"
using namespace std;
int main(){
    string p1,p2,p3;
    cin >> p1 >> p2 >> p3;
    if(p1=="vertebrado")
        if(p2=="ave")
            if(p3=="carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        else
            if(p3=="onivoro") cout << "homem\n";
            else cout << "vaca\n";
    else
        if(p2=="inseto")
            if(p3=="hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        else
            if(p3=="hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
}