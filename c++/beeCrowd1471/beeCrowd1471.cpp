#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,r;
    list<int> vivos;
    while(cin >> n){
        cin >> r;
        if(r<n){
            vivos.clear();
            for(int i=0;i<r;i++){
                int vivo;
                cin >> vivo;
                vivos.push_back(vivo);
            }
            for(int i=1;i<=n;i++){
                std::list<int>::iterator findIter = std::find(vivos.begin(), vivos.end(), i);
                if(findIter == vivos.end()) cout << i << " ";
            }
            cout << endl;
        } else {
            for(int i=0;i<r;i++){ //mesmo quando voltam todos os mergulhadores a leitura dos tokens precisa ser feita
                int vivo;
                cin >> vivo;
            }
            cout << "*" << endl;
        }
    }
}