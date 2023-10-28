# Mês 📅

Neste problema, você precisa converter um número inteiro entre 1 e 12, que representa um mês do ano, em seu nome correspondente em inglês. A resposta deve ser a versão por extenso do mês, com a primeira letra maiúscula.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    string meses[12] = {"January", "February", "March", "April", "May", "June", "July",
                        "August", "September", "October", "November", "December"};

    int mes;
    cin >> mes;
    cout << meses[mes-1] << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa começa incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Cria-se um array de strings chamado `meses` contendo os nomes dos meses em inglês. Cada elemento do array corresponde ao mês com um índice de 0 a 11.

3. Lê-se um número inteiro da entrada e armazena-o na variável `mes`.

4. O programa imprime o nome do mês correspondente, acessando o elemento apropriado no array `meses` com base no valor de `mes`, subtraindo 1 (uma vez que os meses são indexados de 1 a 12, enquanto os arrays em C++ são indexados de 0 a 11).

Este código simples converte o número do mês em seu nome por extenso, permitindo que você forneça respostas claras em inglês para cada mês do ano. 📅🗓🇺🇸