#include "bits/stdc++.h"

using namespace std;

int main(){
    int tempo,velocidade,distancia;
    double litros;
    cin >> tempo >> velocidade;
    distancia = tempo*velocidade;
    litros = distancia/12.0;
    printf("%.3lf\n", litros);
}