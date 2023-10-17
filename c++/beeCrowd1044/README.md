# Verificando se Dois Números são Múltiplos 🧮✅

Neste problema, o objetivo é determinar se dois valores inteiros, A e B, são múltiplos um do outro. Isso significa que um número pode ser obtido multiplicando o outro por um inteiro.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a>=b) a%b==0?cout << "Sao Multiplos\n":cout << "Nao sao Multiplos\n";
    else b%a==0?cout << "Sao Multiplos\n":cout << "Nao sao Multiplos\n";
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `a` e `b` para armazenar os valores inteiros a serem lidos.

3. O programa lê os valores de `a` e `b` a partir da entrada padrão.

4. A verificação de múltiplos é feita com base na estrutura condicional `if...else`.

5. Se `a` for maior ou igual a `b`, o programa verifica se `a` é múltiplo de `b` usando o operador de módulo (`%`). Se for múltiplo, imprime "Sao Multiplos"; caso contrário, imprime "Nao sao Multiplos".

6. Se `b` for maior que `a`, o programa verifica se `b` é múltiplo de `a`. Novamente, se for múltiplo, imprime "Sao Multiplos"; caso contrário, imprime "Nao sao Multiplos".

O código é eficiente e simples, verificando se dois números são múltiplos de forma adequada. É uma ótima solução para o problema. 🧮👍📝