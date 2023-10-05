#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n>0){
        int a,b;
        int ta = 0;
        int tb = 0;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            if(a>b) ta++;
            if(b>a) tb++;
        }
        cout << ta << " " << tb << endl;
        cin >> n;
    }

}
