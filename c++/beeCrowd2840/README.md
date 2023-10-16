# Explicação do Código - Balão++ 🎈

Neste problema, o objetivo é calcular quantos balões podem ser completamente enchidos com uma quantidade de gás hélio disponível, dado o raio dos balões.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    long long r, l;
    double pi = 3.1415;

    cin >> r >> l;
    long volumeBalao = 4 * pi * pow(r, 3) / 3;
    long totalBaloes = l / volumeBalao;
    cout << totalBaloes << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `r` (raio dos balões) e `l` (quantidade de gás hélio disponível).

3. O valor de π (pi) é aproximado como 3.1415 e é armazenado na variável `pi`.

4. O programa lê o valor do raio `r` e a quantidade de gás hélio `l` da entrada padrão usando `cin`.

5. O programa calcula o volume de um balão esférico usando a fórmula matemática `(4/3) * π * r^3` e armazena o resultado na variável `volumeBalao`. Isso é feito com a função `pow(r, 3)` para elevar o raio `r` à terceira potência.

6. Para determinar quantos balões podem ser enchidos completamente com a quantidade de gás disponível, o programa divide a quantidade de gás `l` pelo volume de um balão `volumeBalao`. O resultado é armazenado na variável `totalBaloes`.

7. Por fim, o programa imprime o valor de `totalBaloes`, que representa a quantidade de balões que podem ser enchidos completamente com o gás hélio disponível.

O código é uma solução simples e eficaz para calcular quantos balões podem ser preenchidos com base no raio dos balões e na quantidade de gás disponível. 🎈📏📦🇧🇷