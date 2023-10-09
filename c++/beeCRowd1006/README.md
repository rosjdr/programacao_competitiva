**Explicação do Código - Média 2** 📚📊

Neste problema, você precisa calcular a média ponderada das notas de um aluno, onde cada nota tem um peso específico.

**Lógica do Programa** 🤔

O programa começa incluindo a biblioteca `bits/stdc++.h` para acessar funcionalidades avançadas:

```cpp
#include "bits/stdc++.h"
using namespace std;
```

Em seguida, declaramos três variáveis `double` para representar as notas do aluno: `a`, `b`, e `c`.

```cpp
double a, b, c;
```

Usamos o `cin` para ler as três notas do aluno da entrada padrão:

```cpp
cin >> a >> b >> c;
```

Em seguida, declaramos uma variável `double` chamada `media` para armazenar a média final do aluno:

```cpp
double media;
```

A fórmula para calcular a média ponderada é dada por:

```
media = ((a * peso_a) + (b * peso_b) + (c * peso_c)) / (peso_a + peso_b + peso_c)
```

No seu caso, `peso_a` é 2.0, `peso_b` é 3.0 e `peso_c` é 5.0.

Calculamos a média usando esta fórmula:

```cpp
media = ((a * 2.0) + (b * 3.0) + (c * 5.0)) / (2.0 + 3.0 + 5.0);
```

Finalmente, usamos o `printf` para imprimir a média formatada com uma casa decimal após o ponto e com a mensagem "MEDIA":

```cpp
printf("MEDIA = %.1lf\n", media);
```

O programa calcula a média ponderada das notas do aluno e a imprime na saída padrão com a formatação especificada.

Em resumo, este programa calcula a média ponderada das notas de um aluno de acordo com os pesos dados e imprime o resultado formatado na saída padrão. 🧮🎓📊