#include "bits/stdc++.h"

using namespace std;

int main(){

    double a,b,c,del,r1,r2;

    cin >> a >> b >> c;

    del=(b*b)-4*(a*c);

    if(a==0 || del<0)
        printf("Impossivel calcular\n");
    else{
        r1=(-b+sqrt(del))/(2*a);
        r2=(-b-sqrt(del))/(2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }

    return 0;
}