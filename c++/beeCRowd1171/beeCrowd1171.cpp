#include <iostream>

using namespace std;

int main(){
    int n, x;

    int valores[2001] = {0};


    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        valores[x]++;
    }

    for(int i=1;i<2001;i++)
        if(valores[i]>0) printf("%d aparece %d vez(es)\n",i,valores[i]);

    return 0;
}