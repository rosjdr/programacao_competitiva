#include "bits/stdc++.h"
using namespace std;
int main(){
    long long r,l;
    double pi = 3.1415;

    cin >> r >> l;
    long volumeBalao = 4*pi*pow(r,3)/3;
    long totalBaloes = l/volumeBalao;
    cout << totalBaloes << endl;
}