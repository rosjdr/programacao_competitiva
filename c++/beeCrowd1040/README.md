**Explicação do Código - Média 3 📚📝**

Neste problema, o objetivo é calcular a média ponderada das notas de um aluno, considerando os pesos das notas, e decidir se o aluno foi aprovado, reprovado ou está em exame.

**Lógica do Programa**

O código começa incluindo a biblioteca `bits/stdc++.h`, que é uma biblioteca ampla e útil para programação competitiva em C++.

```cpp
#include "bits/stdc++.h"
```

Em seguida, declaramos as variáveis necessárias:

```cpp
double n1, n2, n3, n4, media, ne;
```

- `n1`, `n2`, `n3`, e `n4` representam as quatro notas do aluno.
- `media` é a variável que armazenará a média das notas.
- `ne` é a nota do exame (caso o aluno esteja em exame).

Depois, utilizamos a função `scanf` para ler as quatro notas do aluno:

```cpp
scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
```

Em seguida, calculamos a média ponderada usando os pesos fornecidos (2, 3, 4 e 1):

```cpp
media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
```

A média calculada é impressa com uma casa decimal:

```cpp
printf("Media: %.1lf\n", media);
```

Agora, avaliamos a média para determinar se o aluno foi aprovado, reprovado ou está em exame. Utilizamos estruturas condicionais `if`, `else if` e `else` para isso:

- Se a média for maior ou igual a 7.0, o aluno é aprovado:

```cpp
if (media >= 7.0)
    printf("Aluno aprovado.\n");
```

- Se a média for menor que 5.0, o aluno é reprovado:

```cpp
else if (media < 5.0)
    printf("Aluno reprovado.\n");
```

- Se a média estiver entre 5.0 e 6.9 (inclusive), o aluno está em exame:

```cpp
else {
    printf("Aluno em exame.\n");
    scanf("%lf", &ne);
    printf("Nota do exame: %.1lf\n", ne);
    media = (media + ne) / 2;
    if (media >= 5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n", media);
}
```

Nesse caso, lemos a nota do exame (`ne`), calculamos a média final considerando a nota do exame e determinamos se o aluno foi aprovado ou reprovado após o exame. A média final é impressa com uma casa decimal.

Finalmente, o programa retorna 0 para indicar que a execução foi concluída com sucesso.

Resumindo, este programa calcula a média ponderada das notas de um aluno e decide seu status com base nas condições especificadas no enunciado do problema. 📚📝🎓