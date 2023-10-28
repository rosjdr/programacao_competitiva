#include "bits/stdc++.h"
using namespace std;
int main(){
    string meses[12] = {"January", "February", "March", "April", "May", "June", "July",
                        "August", "September", "October", "November", "December"};

    int mes;
    cin >> mes;
    cout << meses[mes-1] << endl;
}