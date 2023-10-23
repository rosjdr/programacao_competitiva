#include "bits/stdc++.h"

using namespace std;
int main(){
    vector<char> numeros={'0','1','2','3','4','5','6','7','8','9'};
    string numero;
    while(getline(cin,numero)){
        numero.erase(remove(numero.begin(), numero.end(), ','), numero.end());
        numero.erase(remove(numero.begin(), numero.end(), ' '), numero.end());

        if(numero.length()==0) {
            cout << "error" << endl;
            continue;
        } else {
            string aceito = "";
            for(int i=0;i<numero.length();i++){
                if(numero[i]=='O'||numero[i]=='o') aceito+='0';
                else if(numero[i]=='l') aceito+='1';
                else if(std::find(numeros.begin(), numeros.end(),numero[i]) != numeros.end()) aceito+=numero[i];
                else {
                    cout << "error" << endl;
                    break;
                }
            }
            if(aceito.length()>0){
                try {
                    int flong = stoi(aceito);
                    if(flong>2147483647||flong<0){
                        cout << "error" << endl;
                    } else {
                        cout << flong << endl;
                    }
                } catch (invalid_argument&) {
                    // Se a conversão falhar, imprima "error"
                    cout << "error" << endl;
                } catch (out_of_range&) {
                    // Se houver overflow, imprima "error"
                    cout << "error" << endl;
                }
            } else {
                cout << "error" << endl;
            }
        }
    }
}