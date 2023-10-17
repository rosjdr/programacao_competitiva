# Teste de Seleção 1 - Valores Aceitos ✅

Neste problema, o objetivo é verificar se quatro valores inteiros atendem a um conjunto de condições especificadas e, com base nisso, exibir uma mensagem indicando se os valores são aceitos ou não.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b > c && d > a) && ((c + d) > (a + b)) && (c > 0 && d > 0) && a % 2 == 0) {
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `a`, `b`, `c` e `d` para armazenar os quatro valores inteiros.

3. O programa lê os valores de `a`, `b`, `c` e `d` a partir da entrada padrão.

4. É aplicada uma série de condições para verificar se os valores atendem aos critérios:
    - `b` deve ser maior que `c`.
    - `d` deve ser maior que `a`.
    - A soma de `c` e `d` deve ser maior do que a soma de `a` e `b`.
    - `c` e `d` devem ser positivos.
    - `a` deve ser um número par.

5. Se todas as condições forem verdadeiras, o programa exibe a mensagem "Valores aceitos". Caso contrário, a mensagem exibida é "Valores nao aceitos".

O código é eficiente e direto, verificando as condições e informando se os valores são aceitos ou não. 🔍🔢📋✅