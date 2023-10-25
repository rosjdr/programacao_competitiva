# Sobrinho do Meio 🤵💼

Tio Patinhas, o famoso milionário das histórias em quadrinhos, precisa de ajuda para identificar o sobrinho do meio entre Huguinho, Zezinho e Luisinho. Ele fez uma aposta com os sobrinhos e precisa ganhar essa aposta, afinal, não quer perder seu ouro! 🦆💰

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int h,z,l;
    cin >> h >> z >> l;
    if((h>z&&h<l)||(h<z&&h>l)) cout << "huguinho" << endl;
    if((z>h&&z<l)||(z<h&&z>l)) cout << "zezinho" << endl;
    if((l>z&&l<h)||(l<z&&l>h)) cout << "luisinho" << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inicia incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Lê-se três inteiros da entrada, representando as idades de Huguinho (h), Zezinho (z) e Luisinho (l).

3. O programa avalia as idades para identificar o sobrinho do meio. A lógica consiste em verificar se a idade de cada sobrinho está entre as outras duas idades. O sobrinho do meio é aquele cuja idade está entre as idades dos outros dois sobrinhos.

4. Se Huguinho for o sobrinho do meio, imprime "huguinho". Se Zezinho for o sobrinho do meio, imprime "zezinho". Se Luisinho for o sobrinho do meio, imprime "luisinho".

O código é eficaz na identificação do sobrinho do meio com base nas idades fornecidas. Assim, Tio Patinhas pode ganhar a aposta e não perder suas moedas de ouro! 🤵💼🎉🦆💰🥇