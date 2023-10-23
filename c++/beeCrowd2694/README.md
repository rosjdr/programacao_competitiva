# Problema com a Calculadora 🧮🔢

Neste problema, Joãozinho precisa ajudar seu pai a corrigir um relatório. O relatório contém linhas com números e letras misturados. A tarefa de Joãozinho é extrair os números das linhas e somá-los.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string linha;
        cin >> linha;
        string numeros[3];
        numeros[0] = linha.substr(2,2);
        numeros[1] = linha.substr(5,3);
        numeros[2] = linha.substr(11,2);
        cout << stoi(numeros[0]) + stoi(numeros[1]) + stoi(numeros[2]) << endl;
    }
}
```

**Passo a Passo da Lógica:**

1. O programa inicia incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Lê-se um inteiro `n` da entrada, que representa o número de linhas a serem processadas.

3. Entra-se em um loop que irá processar cada linha. Para cada linha, a string é lida da entrada.

4. São declaradas três strings no array `numeros[3]`, cada uma destinada a armazenar uma parte dos números na linha.

5. A função `substr` é utilizada para extrair partes da string da linha. Os números estão sempre na mesma posição, portanto, são usados índices fixos para extrair as partes necessárias da string.

6. Os números extraídos das três partes da linha são convertidos em inteiros usando `stoi`, somados e o resultado é impresso na saída padrão, seguido de uma quebra de linha.

O código é eficiente e consegue extrair e somar os números das linhas corretamente, produzindo a saída esperada. 🧮🔢👍📝