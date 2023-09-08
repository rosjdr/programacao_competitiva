# Explicação do Código - Cálculo das Raízes da Equação de Bhaskara

Este programa em C++ calcula as raízes de uma equação quadrática usando a fórmula de Bhaskara. A equação de Bhaskara é usada para encontrar as raízes de uma equação quadrática na forma \(ax^2 + bx + c = 0\), onde \(a\), \(b\), e \(c\) são coeficientes reais e \(x\) representa a variável desconhecida.

## Lógica do Programa

O código começa declarando cinco variáveis de ponto flutuante: `a`, `b`, `c`, `del` (discriminante), `r1` (primeira raiz) e `r2` (segunda raiz).

```cpp
double a, b, c, del, r1, r2;
```

Em seguida, o programa lê os valores dos coeficientes `a`, `b`, e `c` da entrada padrão:

```cpp
cin >> a >> b >> c;
```

O discriminante (`del`) é calculado usando a fórmula \(del = b^2 - 4ac\). O discriminante é importante para determinar o tipo e o número de raízes da equação.

```cpp
del = (b * b) - 4 * (a * c);
```

O programa verifica duas condições:

1. Se `a` for igual a zero ou se o discriminante for menor que zero, isso significa que não é possível calcular as raízes reais da equação, pois resultaria em uma divisão por zero ou na raiz de um número negativo. Nesse caso, é exibida a mensagem "Impossivel calcular".

```cpp
if (a == 0 || del < 0)
    printf("Impossivel calcular\n");
```

2. Se as condições acima não forem atendidas, o programa calcula as raízes usando a fórmula de Bhaskara: \(r1 = \frac{-b + \sqrt{del}}{2a}\) e \(r2 = \frac{-b - \sqrt{del}}{2a}\). As raízes são então impressas com cinco dígitos após o ponto decimal.

```cpp
else {
    r1 = (-b + sqrt(del)) / (2 * a);
    r2 = (-b - sqrt(del)) / (2 * a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
}
```

## Resultado

O programa calcula e exibe as raízes de uma equação quadrática usando a fórmula de Bhaskara. Ele verifica se é possível calcular as raízes com base no valor do discriminante e lida com casos em que as raízes não podem ser calculadas, exibindo a mensagem "Impossivel calcular".

📊🔍🔢