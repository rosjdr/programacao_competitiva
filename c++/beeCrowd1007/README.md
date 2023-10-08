**Explicação do Código - Diferença 📚📝**

Neste problema, o objetivo é calcular a diferença entre o produto de dois pares de números inteiros.

**Lógica do Programa**

O código começa incluindo a biblioteca `iostream`, que é usada para entrada e saída de dados em C++:

```cpp
#include <iostream>
using namespace std;
```

Em seguida, declaramos as variáveis necessárias:

```cpp
int a, b, c, d, dif;
```

- `a`, `b`, `c` e `d` são as quatro variáveis que armazenarão os números inteiros de entrada.
- `dif` é a variável que armazenará a diferença calculada.

Agora, lemos os quatro valores inteiros da entrada padrão:

```cpp
cin >> a;
cin >> b;
cin >> c;
cin >> d;
```

Calculamos a diferença usando a fórmula fornecida no enunciado:

```cpp
dif = (a * b) - (c * d);
```

A diferença calculada é então impressa com a mensagem "DIFERENCA =":

```cpp
cout << "DIFERENCA = " << dif << endl;
```

A saída inclui a palavra "DIFERENCA" em letras maiúsculas, seguida por um espaço em branco antes e depois da igualdade.

Por fim, o programa retorna 0 para indicar que a execução foi concluída com sucesso.

Resumindo, este programa lê quatro valores inteiros, calcula a diferença entre o produto de dois pares de números e imprime o resultado formatado conforme o enunciado. 📚📝🧮