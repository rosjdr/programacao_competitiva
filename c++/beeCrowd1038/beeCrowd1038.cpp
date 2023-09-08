#include "bits/stdc++.h"

using namespace std;

int main(){
    int codigo, qtde;
    double total;

    scanf("%d %d", &codigo, &qtde);
    switch (codigo) {
        case 1:
            total = qtde*4.0;
            break;
        case 2:
            total = qtde*4.5;
            break;
        case 3:
            total = qtde*5.0;
            break;
        case 4:
            total = qtde*2.0;
            break;
        case 5:
            total = qtde*1.5;
            break;
    }
    printf("Total: R$ %.2lf\n", total);
}