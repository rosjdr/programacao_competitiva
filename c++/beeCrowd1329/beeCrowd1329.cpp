#include "bits/stdc++.h"

using namespace std;

int main(){
    int n, r, tm, tj;
    cin >> n;
    while(n!=0){
        tm = 0;
        tj = 0;
        for(int i=0;i<n;i++){
            cin >> r;
            r==0?tm++:tj++;
        }
        cout << "Mary won " << tm << " times and John won " << tj << " times" << endl;
        cin >> n;
    }
}