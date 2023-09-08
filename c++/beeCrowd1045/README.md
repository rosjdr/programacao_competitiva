# Explicação do Código - Classificação de Triângulos

Este programa em C++ lê três valores de ponto flutuante A, B e C e tem como objetivo classificar o triângulo formado por esses lados, além de ordená-los em ordem decrescente.

## Lógica do Programa

O código começa declarando três variáveis de ponto flutuante: `a`, `b` e `c`, para armazenar os três lados do triângulo, e uma variável auxiliar `aux`.

```cpp
double a, b, c, aux;
```

Em seguida, o programa lê os valores de `a`, `b` e `c` da entrada padrão.

```cpp
cin >> a >> b >> c;
```

Para garantir que o lado `a` represente o maior dos três lados, o programa realiza comparações e trocas de valores usando a variável auxiliar `aux`. Isso garante que `a` seja o maior lado.

```cpp
if (b > a) {
    aux = a;
    a = b;
    b = aux;
}
if (c > a) {
    aux = a;
    a = c;
    c = aux;
}
```

Agora, o programa verifica a classificação do triângulo de acordo com as seguintes condições:

1. Se `a` for maior ou igual à soma de `b` e `c`, o triângulo não pode ser formado, e o programa imprime "NAO FORMA TRIANGULO".

2. Se `a^2` for igual à soma dos quadrados de `b^2` e `c^2`, o triângulo é retângulo, e o programa imprime "TRIANGULO RETANGULO".

3. Se `a^2` for maior do que a soma dos quadrados de `b^2` e `c^2`, o triângulo é obtusângulo, e o programa imprime "TRIANGULO OBTUSANGULO".

4. Se `a^2` for menor do que a soma dos quadrados de `b^2` e `c^2`, o triângulo é acutângulo, e o programa imprime "TRIANGULO ACUTANGULO".

5. Se `a`, `b` e `c` forem iguais, o triângulo é equilátero, e o programa imprime "TRIANGULO EQUILATERO".

6. Se apenas dois dos lados forem iguais, o triângulo é isósceles, e o programa imprime "TRIANGULO ISOSCELES".

## Resultado

O programa imprime a classificação do triângulo formado pelos lados `a`, `b` e `c` e garante que os lados estejam ordenados em ordem decrescente. Dependendo das medidas dos lados, ele classifica o triângulo como retângulo, obtusângulo, acutângulo, equilátero ou isósceles, ou indica que o triângulo não pode ser formado.

Essa classificação é útil em problemas relacionados à geometria e é uma tarefa comum em programação competitiva.

🔺📐📏