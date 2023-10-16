# Classificação de Valores 🧮

Neste problema, o objetivo é ler um valor inteiro `N`, que representa a quantidade de valores inteiros `X` a serem lidos em seguida. Em seguida, o programa deve determinar quantos desses valores `X` estão dentro do intervalo [10,20] e quantos estão fora desse intervalo.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    long n, v;
    cin >> n;
    int in = 0;
    int out = 0;
    for(long i = 0; i < n; i++){
        cin >> v;
        if(v >= 10 && v <= 20) in++;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `n` (quantidade de casos de teste) e `v` (valor inteiro a ser lido).

3. São inicializados os contadores `in` (valores dentro do intervalo) e `out` (valores fora do intervalo).

4. O programa lê o valor `n`, que indica quantos valores inteiros `X` serão lidos a seguir.

5. O programa entra em um loop `for` para ler os valores `X` e determinar se estão dentro ou fora do intervalo.

6. Para cada valor `X`, o programa lê o valor `v`.

7. O programa verifica se `v` está dentro do intervalo [10,20] usando a condição `if(v >= 10 && v <= 20)`. Se a condição for verdadeira, incrementa `in`. Caso contrário, incrementa `out`.

8. Após a leitura de todos os valores, o programa imprime a quantidade de valores dentro e fora do intervalo.

O código é simples e direto, contando os valores que se encaixam no intervalo desejado e os que estão fora dele. 📊🔍📈