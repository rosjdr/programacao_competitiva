#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string p;
        cin >> p;
        if(p.length()==3){
            if(p[0]=='o'||p[2]=='e') cout << 1;
            else cout << 2;
        } else {
            cout << 3;
        }
        cout << endl;
    }

    return 0;
}