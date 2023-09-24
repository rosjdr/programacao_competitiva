#include "bits/stdc++.h"

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        string v;
        cin >> v;
        int totalLeds = 0;
        for(long unsigned int j=0;j<v.length();j++){
            switch (v[j]) {
                case '0': totalLeds+=6;
                          break;
                case '1': totalLeds+=2;
                          break;
                case '2': totalLeds+=5;
                          break;
                case '3': totalLeds+=5;
                          break;
                case '4': totalLeds+=4;
                          break;
                case '5': totalLeds+=5;
                          break;
                case '6': totalLeds+=6;
                          break;
                case '7': totalLeds+=3;
                          break;
                case '8': totalLeds+=7;
                          break;
                case '9': totalLeds+=6;
                          break;
            }
        }
        cout << totalLeds << " leds" << endl;
    }
}