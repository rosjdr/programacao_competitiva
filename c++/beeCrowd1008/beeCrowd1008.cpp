#include <iostream>

using namespace std;

int main() {

    int num, qtde;
    double valor;

    cin >> num;
    cin >> qtde;
    cin >> valor;

    cout << "NUMBER = " << num << endl;
    cout.precision(2);
    cout << fixed;
    cout << "SALARY = U$ " << valor*qtde << endl;

    return 0;
}