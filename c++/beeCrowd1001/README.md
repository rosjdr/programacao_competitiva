**Explicação do Código - Extremamente Básico** 📜

Este é um problema simples que requer a leitura de dois valores inteiros, a soma desses valores e a impressão do resultado no formato especificado.

**Lógica do Programa** 🤔

Primeiro, incluímos a biblioteca `iostream` para entrada e saída de dados em C++:

```cpp
#include <iostream>
using namespace std;
```

Em seguida, declaramos duas variáveis inteiras `A` e `B`:

```cpp
int A, B;
```

Lemos os dois valores inteiros a partir da entrada padrão:

```cpp
scanf("%d %d", &A, &B);
```

Em seguida, realizamos a soma desses valores e atribuímos o resultado à variável `X`:

```cpp
int X = A + B;
```

Agora, usamos `printf` para imprimir o resultado no formato especificado, onde "X =" é seguido pelo valor de `X` e um caractere de nova linha (`\n`) para garantir que haja uma quebra de linha após o resultado:

```cpp
printf("X = %d\n", X);
```

O programa encerra retornando 0 para indicar que a execução foi concluída com sucesso.

Em resumo, este programa lê dois valores inteiros, calcula sua soma e imprime o resultado no formato "X = valor". É um programa simples que demonstra a leitura e impressão de valores em C++. 🧮🖨️📝