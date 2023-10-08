**Explicação do Código - Área** 📐🔵🔲

Neste problema, você deve calcular e exibir cinco áreas diferentes com base em três valores de entrada: A, B e C. As áreas são:

a) A área de um triângulo retângulo com base A e altura C.
b) A área de um círculo com raio C.
c) A área de um trapézio com bases A e B e altura C.
d) A área de um quadrado com lado B.
e) A área de um retângulo com lados A e B.

**Lógica do Programa** 🤔

Primeiro, incluímos a biblioteca `bits/stdc++.h` que fornece funcionalidades mais avançadas:

```cpp
#include <bits/stdc++.h>
using namespace std;
```

Em seguida, declaramos três variáveis de ponto flutuante de dupla precisão: `a`, `b` e `c`:

```cpp
double a, b, c;
```

Lemos os valores de entrada para `a`, `b` e `c` a partir da entrada padrão:

```cpp
scanf("%lf %lf %lf", &a, &b, &c);
```

Agora, calculamos e exibimos as cinco áreas requeridas usando `printf`. Usamos `%.3lf` para formatar os números com três dígitos após o ponto decimal:

```cpp
printf("TRIANGULO: %.3lf\n", a * c / 2);
printf("CIRCULO: %.3lf\n", 3.14159 * pow(c, 2));
printf("TRAPEZIO: %.3lf\n", (a + b) * c / 2);
printf("QUADRADO: %.3lf\n", b * b);
printf("RETANGULO: %.3lf\n", a * b);
```

Aqui estão as fórmulas utilizadas para calcular as áreas:

- Área do triângulo: (base * altura) / 2
- Área do círculo: π * raio^2 (onde π é aproximadamente 3.14159)
- Área do trapézio: ((base maior + base menor) * altura) / 2
- Área do quadrado: lado * lado
- Área do retângulo: lado1 * lado2

Cada área é calculada e exibida na ordem especificada.

O programa finaliza retornando 0:

```cpp
return 0;
```

Em resumo, este programa lê três valores de entrada e calcula e exibe as áreas de um triângulo, círculo, trapézio, quadrado e retângulo com base nesses valores. As áreas são formatadas com três dígitos após o ponto decimal. 📊🔢📝