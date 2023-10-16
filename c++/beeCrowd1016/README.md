# Explicação do Código - Distância 🚗

Neste problema, o objetivo é calcular quanto tempo leva para um carro (carro Y) alcançar uma certa distância em relação a outro carro (carro X). O carro X está se movendo a uma velocidade constante de 60 Km/h, enquanto o carro Y está se movendo a uma velocidade constante de 90 Km/h.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int k;
    cin >> k;
    cout << k * 2 << " minutos" << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. É declarada a variável `k` que representa a distância em quilômetros que o carro Y deseja alcançar em relação ao carro X.

3. O programa lê o valor da distância `k` da entrada padrão usando `cin`.

4. O cálculo é simples: o carro Y consegue se afastar 1 quilômetro do carro X a cada 2 minutos. Portanto, para calcular o tempo necessário, basta multiplicar a distância `k` por 2.

5. Por fim, o programa imprime o tempo necessário em minutos, seguido da mensagem "minutos". Isso é feito com a instrução `cout`.

O código é direto e eficiente, pois calcula o tempo necessário com base na velocidade relativa dos carros e na distância desejada. 🚗⏱📏🇧🇷