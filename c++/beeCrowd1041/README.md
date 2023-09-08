# Explicação do Código - Classificação de Ponto no Plano

Este programa em C++ lê as coordenadas de um ponto (x e y) em um plano cartesiano e determina a qual quadrante ou eixo o ponto pertence, ou se está na origem.

## Lógica do Programa

O código começa declarando duas variáveis, `x` e `y`, para armazenar as coordenadas do ponto:

```c++
double x, y;
```

Em seguida, ele lê as coordenadas do ponto a partir da entrada padrão:

```c++
cin >> x >> y;
```

O programa utiliza uma série de condicionais `if-else` para classificar o ponto:

- Se `x` e `y` forem ambos iguais a zero, o ponto está na origem, e a mensagem "Origem" é exibida:

```c++
if (x == 0 && y == 0)
    cout << "Origem\n";
```

- Se `y` for igual a zero, o ponto está no eixo X, e a mensagem "Eixo X" é exibida:

```c++
else if (y == 0)
    cout << "Eixo X\n";
```

- Se `x` for igual a zero, o ponto está no eixo Y, e a mensagem "Eixo Y" é exibida:

```c++
else if (x == 0)
    cout << "Eixo Y\n";
```

- Se `x` e `y` forem ambos positivos, o ponto está no primeiro quadrante (Q1), e a mensagem "Q1" é exibida:

```c++
else if (x > 0 && y > 0)
    cout << "Q1\n";
```

- Se `x` for negativo e `y` positivo, o ponto está no segundo quadrante (Q2), e a mensagem "Q2" é exibida:

```c++
else if (x < 0 && y > 0)
    cout << "Q2\n";
```

- Se `x` e `y` forem ambos negativos, o ponto está no terceiro quadrante (Q3), e a mensagem "Q3" é exibida:

```c++
else if (x < 0 && y < 0)
    cout << "Q3\n";
```

- Se nenhuma das condições acima for atendida, o ponto está no quarto quadrante (Q4), e a mensagem "Q4" é exibida:

```c++
else
    cout << "Q4\n";
```

## Resultado

O resultado é a classificação do ponto em um dos quadrantes (Q1, Q2, Q3, Q4), nos eixos (Eixo X, Eixo Y) ou na origem, de acordo com as coordenadas fornecidas.

🌍📊📍