#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int c[n][m];
    //leitura do campo
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> c[i][j];

    //soma as linhas e colunas
    int somaLinhas[n], somaColunas[m];
    for(int i=0;i<n;i++){
        somaLinhas[i] = 0;
        for(int j=0;j<m;j++){
            somaLinhas[i]+=c[i][j];
        }
    }
    for(int j=0;j<m;j++){
        somaColunas[j] = 0;
        for(int i=0;i<n;i++){
            somaColunas[j]+=c[i][j];
        }
    }
    int maior = 0;
    for(int i=0; i<n; i++){
        if (somaLinhas[i]>maior) maior=somaLinhas[i];
    }
    for(int i=0; i<m; i++){
        if (somaColunas[i]>maior) maior=somaColunas[i];
    }
    cout << maior << endl;
}