**Explicação do Código - Média 1** 📜

Neste problema, você precisa calcular a média ponderada de duas notas de um aluno, onde a primeira nota tem peso 3.5 e a segunda nota tem peso 7.5.

**Lógica do Programa** 🤔

Primeiro, incluímos a biblioteca `iostream` para entrada e saída de dados em C++:

```cpp
#include <iostream>
using namespace std;
```

Em seguida, declaramos três variáveis de ponto flutuante de dupla precisão: `a`, `b` e `media`:

```cpp
double a, b, media;
```

Lemos os dois valores de ponto flutuante a partir da entrada padrão:

```cpp
scanf("%lf", &a);
scanf("%lf", &b);
```

Agora, realizamos o cálculo da média ponderada usando a fórmula fornecida:

```cpp
media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
```

Isso calcula a média ponderada das notas, onde a primeira nota (`a`) tem peso 3.5 e a segunda nota (`b`) tem peso 7.5. A soma dos pesos é 11.

Usamos `printf` para imprimir o resultado no formato especificado, onde "MEDIA =" é seguido pela média com cinco dígitos após o ponto decimal e um caractere de nova linha (`\n`) para garantir que haja uma quebra de linha após o resultado:

```cpp
printf("MEDIA = %.5lf\n", media);
```

O programa encerra retornando 0 para indicar que a execução foi concluída com sucesso.

Em resumo, este programa lê duas notas de um aluno, calcula a média ponderada e imprime o resultado no formato "MEDIA = valor". É uma tarefa simples que envolve cálculos de média ponderada. 🧮🖨️📝