#include "bits/stdc++.h"
using namespace std;
int main(){
    int x;
    cin >> x;
    x%2==0?x++:x=x;
    for(int i=0;i<6;i++){
        cout << x << endl;
        x+=2;
    }
}