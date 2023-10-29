**Explicação do Código - Frequência de Números 📊🔢**

Neste problema, o objetivo é ler uma sequência de números e determinar quantas vezes cada número aparece na sequência, apresentando os resultados em ordem crescente de valor.

**Lógica do Programa**

O código começa incluindo a biblioteca `iostream`, que é usada para entrada e saída de dados em C++:

```cpp
#include <iostream>
using namespace std;
```

A seguir, declaramos as variáveis necessárias:

```cpp
int n, x;
int valores[2001] = {0};
```

- `n` representa a quantidade de valores a serem lidos.
- `x` é a variável temporária para armazenar cada número lido.
- `valores` é um array que será usado para contar quantas vezes cada número aparece. Ele é inicializado com zeros.

Lemos a quantidade de valores a serem lidos:

```cpp
scanf("%d", &n);
```

Agora, usamos um loop `for` para ler cada número da sequência, atualizar a contagem no array `valores` e armazenar o número em `x`:

```cpp
for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    valores[x]++;
}
```

Dentro do loop, `valores[x]` é incrementado para contar a ocorrência do número `x`.

Finalmente, usamos outro loop `for` para percorrer o array `valores` e imprimir os resultados:

```cpp
for (int i = 1; i < 2001; i++) {
    if (valores[i] > 0) {
        printf("%d aparece %d vez(es)\n", i, valores[i]);
    }
}
```

Este loop percorre todos os números de 1 a 2000 (conforme o enunciado) e verifica se eles aparecem pelo menos uma vez. Se sim, imprime o número e a contagem.

O programa finaliza retornando 0 para indicar que a execução foi concluída com sucesso.

Resumindo, este programa lê uma sequência de números, conta quantas vezes cada número aparece e imprime os resultados em ordem crescente de valor. 📊🔢📝