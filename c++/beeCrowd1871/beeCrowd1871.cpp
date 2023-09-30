#include "bits/stdc++.h"
#include <string>

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;
    while(n!=0&&m!=0){
        string s = to_string(n+m);
        for(int i=0;i<s.length();i++){
            if(s[i]!='0') cout << s[i];
        }
        cout << endl;
        cin >> n >> m;
    }

    return 0;
}