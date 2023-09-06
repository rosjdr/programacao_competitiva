#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,m;
    long long nFat, mFat;

    while(cin >> n >> m){
        nFat = 1;
        mFat = 1;
        for(int i = 1;i<=n;i++) nFat*=i;
        for(int i = 1;i<=m;i++) mFat*=i;
        cout << nFat+mFat << endl;
    }
}