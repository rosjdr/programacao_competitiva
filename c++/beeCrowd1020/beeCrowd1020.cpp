#include <iostream>

using namespace std;

int main() {

    int dias, anos, meses, d;
    cin >> dias;
    anos = dias/365;
    cout << anos << " ano(s)" << endl;
    meses = (dias-(anos*365))/30;
    cout << meses << " mes(es)" << endl;
    d = (dias-(anos*365))%30;
    cout << d << " dia(s)" << endl;

    return 0;
}