#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if ((i+1)+(j+1)==n+1) cout << 2;
                else if(i==j) cout << 1;
                else cout << 3;
            }
            cout << endl;
        }
    }
}
