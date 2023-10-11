**Explicação do Código - Pares, Ímpares, Positivos e Negativos** 🧮📊

Neste problema, você deve ler cinco valores inteiros e mostrar quantos deles são pares, quantos são ímpares, quantos são positivos e quantos são negativos.

**Lógica do Programa** 🤔

Primeiro, o programa inclui a biblioteca `bits/stdc++.h` para acessar funcionalidades avançadas:

```cpp
#include "bits/stdc++.h"
using namespace std;
```

Em seguida, declaramos quatro variáveis inteiras: `tpares` para contar os valores pares, `timpares` para contar os valores ímpares, `tpos` para contar os valores positivos e `tneg` para contar os valores negativos:

```cpp
int tpares = 0;
int timpares = 0;
int tpos = 0;
int tneg = 0;
```

O programa entra em um loop `for` para ler cinco valores:

```cpp
for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
```

Para cada valor lido, ele verifica se é positivo ou negativo e atualiza as variáveis `tpos` e `tneg` de acordo:

```cpp
if (x > 0) tpos++;
if (x < 0) tneg++;
```

Além disso, o programa verifica se o valor é par ou ímpar e atualiza as variáveis `tpares` e `timpares` apropriadamente:

```cpp
if (x % 2 == 0) tpares++;
else timpares++;
```

Finalmente, o programa imprime as quantidades de valores pares, ímpares, positivos e negativos de acordo com o formato especificado:

```cpp
cout << tpares << " valor(es) par(es)" << endl;
cout << timpares << " valor(es) impar(es)" << endl;
cout << tpos << " valor(es) positivo(s)" << endl;
cout << tneg << " valor(es) negativo(s)" << endl;
```

Em resumo, o programa lê cinco valores, conta quantos deles são pares, ímpares, positivos e negativos, e imprime esses totais no formato exigido. 🧮📊🔍