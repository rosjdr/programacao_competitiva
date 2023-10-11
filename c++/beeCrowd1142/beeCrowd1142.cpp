#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=(n*4);i++){
        i%4==0?cout << "PUM" << endl:cout << i << " ";
    }
}