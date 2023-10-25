# Tempo do Duende ⏰🎅🎁

A fábrica de presentes dos duendes para o Natal é um lugar movimentado, e a gestão do tempo é essencial. Os duendes precisam saber se podem terminar dois presentes com o tempo que resta no expediente, ou se precisam deixar o trabalho para o dia seguinte.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    (a+b)<=n?cout << "Farei hoje!" << endl:cout << "Deixa para amanha!"<<endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inicia incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Lê-se três inteiros da entrada: `n` representa os minutos que faltam para o final do expediente, e `a` e `b` indicam quantos minutos são necessários para fabricar os dois presentes que o duende Ed precisa fazer.

3. O programa avalia se a soma dos minutos necessários para os presentes `a` e `b` é menor ou igual aos minutos restantes no expediente `n`.

4. Se a soma for menor ou igual, imprime "Farei hoje!". Caso contrário, imprime "Deixa para amanhã!".

O código é eficaz na decisão de se os dois presentes podem ser feitos no tempo restante, ajudando Ed a gerenciar seu trabalho na fábrica de presentes do Papai Noel! 🎅🎁🕐✅