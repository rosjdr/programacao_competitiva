# Explicação do Código - Cálculo do Volume da Esfera

Este programa em C++ calcula o volume de uma esfera com base no raio fornecido pelo usuário. A esfera é um objeto tridimensional, e seu volume é calculado usando a fórmula matemática padrão: \(\frac{4}{3} \pi R^3\).

## Lógica do Programa

O código começa declarando duas variáveis de ponto flutuante: `r` (raio da esfera) e `v` (volume da esfera).

```cpp
double r, v;
```

Em seguida, o programa lê o valor do raio da esfera da entrada padrão:

```cpp
cin >> r;
```

A variável `v` é calculada usando a fórmula do volume da esfera. Note que usamos \(4.0/3\) em vez de \(4/3\) para garantir que a divisão seja tratada como um valor de ponto flutuante.

```cpp
v = (4.0 / 3) * 3.14159 * pow(r, 3);
```

Finalmente, o programa imprime o resultado formatado com três casas decimais após o ponto, conforme especificado no problema:

```cpp
printf("VOLUME = %.3lf\n", v);
```

## Resultado

O programa calcula e exibe o volume da esfera com base no raio fornecido pelo usuário, seguindo a fórmula matemática padrão. Isso é útil em diversas aplicações onde o cálculo do volume é necessário, como em geometria ou física.

🔵🟠🟢