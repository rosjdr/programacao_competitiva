#include "bits/stdc++.h"
using namespace std;
int main(){
    string nome;
    double salario, total;
    cin >> nome;
    cin >> salario >> total;
    printf("TOTAL = R$ %.2lf\n", salario+(total*0.15));
}