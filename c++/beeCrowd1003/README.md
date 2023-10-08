**Explicação do Código - Soma Simples 🧮**

Neste problema, o objetivo é ler dois valores inteiros, calcular a soma entre eles e imprimir o resultado.

**Lógica do Programa**

O código começa incluindo a biblioteca `iostream`, que é usada para entrada e saída de dados em C++:

```cpp
#include <iostream>
using namespace std;
```

A seguir, declaramos as variáveis necessárias:

```cpp
int A, B, SOMA;
```

- `A` e `B` representam os valores inteiros a serem lidos.
- `SOMA` é a variável que armazenará o resultado da soma.

Lemos os valores inteiros de `A` e `B`:

```cpp
scanf("%d", &A);
scanf("%d", &B);
```

Calculamos a soma dos valores `A` e `B` e armazenamos o resultado em `SOMA`:

```cpp
SOMA = A + B;
```

Finalmente, imprimimos o resultado no formato especificado pelo problema:

```cpp
printf("SOMA = %d\n", SOMA);
```

A mensagem "SOMA" é impressa em letras maiúsculas, seguida por um espaço em branco, o sinal de igualdade e o valor da soma. O `\n` é usado para imprimir uma quebra de linha.

O programa finaliza retornando 0 para indicar que a execução foi concluída com sucesso.

Em resumo, este programa lê dois valores inteiros, calcula a soma entre eles e imprime o resultado no formato especificado. 🧮🔢📝