# Números Positivos 🌟🔢

Este programa em C++ tem como objetivo contar a quantidade de valores positivos dentre seis valores fornecidos.

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;

int main(){
    int pos = 0;
    for(int i=0;i<6;i++){
        double n;
        cin >> n;
        if(n>0) pos++;
    }
    cout << pos << " valores positivos\n";
}
```

**Explicação:**

1. **Declaração de Variáveis:** Inicia-se o programa declarando uma variável `pos` para armazenar a quantidade de valores positivos. Inicialmente, essa variável é definida como zero.

2. **Estrutura de Repetição:** Utiliza-se um loop `for` para ler seis valores fornecidos pelo usuário.

3. **Leitura de Valores:** Cada valor é lido e armazenado na variável `n`.

4. **Verificação de Positividade:** Utiliza-se uma estrutura condicional `if` para verificar se o valor `n` é maior que zero, indicando assim um valor positivo. Se a condição for verdadeira, incrementa-se a variável `pos` em 1.

5. **Saída de Resultado:** Ao final, imprime-se a quantidade de valores positivos encontrados.

Este código é simples, eficiente e cumpre o propósito de contar quantos valores positivos foram fornecidos pelo usuário.

✨💻✨