# Consumo Médio de Combustível 🚗💨

Neste problema, você precisa calcular o consumo médio de um automóvel com base na distância total percorrida em quilômetros (Km) e no total de combustível gasto em litros (L).

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int x;
    double y;
    cin >> x >> y;
    printf("%.3lf km/l\n", (x/y));
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `x` (inteiro) e `y` (real) para armazenar a distância total e o total de combustível gasto, respectivamente.

3. O programa lê os valores de `x` e `y` a partir da entrada padrão.

4. É calculada a média de consumo, que é a divisão da distância total `x` pelo total de combustível `y`.

5. A média de consumo é impressa na saída padrão com 3 casas decimais, seguida da mensagem "km/l".

O código é simples e direto, efetuando o cálculo da média de consumo e exibindo o resultado formatado como especificado no problema. 📊📋🚗📝