# Descobrindo o Animal 🦜🐢🐁

Neste problema, você deve identificar um animal com base em três características fornecidas. Cada característica está associada a uma palavra específica.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    string p1,p2,p3;
    cin >> p1 >> p2 >> p3;
    if(p1=="vertebrado")
        if(p2=="ave")
            if(p3=="carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        else
            if(p3=="onivoro") cout << "homem\n";
            else cout << "vaca\n";
    else
        if(p2=="inseto")
            if(p3=="hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        else
            if(p3=="hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `p1`, `p2`, e `p3` para armazenar as três palavras fornecidas.

3. O programa lê as palavras a partir da entrada padrão.

4. A identificação do animal é realizada com base em aninhamentos de estruturas condicionais `if...else`. Primeiro, verifica-se a palavra em `p1`, que define se o animal é "vertebrado" ou "invertebrado".

5. Dependendo da classificação "vertebrado" ou "invertebrado", o programa segue para as próximas palavras `p2` e `p3` para refinar a classificação do animal.

6. Com base nas três palavras fornecidas, o programa imprime o nome do animal correspondente.

O código é eficiente e utiliza uma série de estruturas condicionais aninhadas para identificar o animal corretamente com base nas palavras fornecidas. É uma ótima solução para o problema. 🦜🐢🐁👍📝