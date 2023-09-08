# Explicação do Código - Cálculo de Notas e Moedas

Este programa em C++ recebe um valor monetário e calcula a menor quantidade de notas e moedas necessárias para representar esse valor, considerando as notas de R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2, e as moedas de R$ 1, R$ 0.50, R$ 0.25, R$ 0.10, R$ 0.05 e R$ 0.01.

## Lógica do Programa

O código inicia declarando variáveis para o valor monetário (`n`), o valor restante após calcular as notas e moedas (`resto`), e variáveis separadas para cada tipo de nota e moeda.

```cpp
double n, resto;
int nota100, nota50, nota20, nota10, nota5, nota2;
int moeda1, moeda50, moeda25, moeda10, moeda5, moeda1c;
```

Aqui, o programa calcula a quantidade de notas de R$ 100 necessárias para representar a parte inteira do valor `n` e imprime essa quantidade, junto com o valor da nota.

```cpp
nota100 = n / 100;
cout << "NOTAS:" << endl;
cout << nota100 << " nota(s) de R$ 100.00" << endl;
```

Depois, é calculado o valor restante (`resto`) após contar as notas de R$ 100. O processo se repete para as notas de R$ 50, R$ 20, R$ 10, R$ 5 e R$ 2, com a subtração do valor de cada nota do valor restante.

```cpp
resto = n - (nota100 * 100);
nota50 = resto / 50;
cout << nota50 << " nota(s) de R$ 50.00" << endl;
```

O mesmo processo se aplica para as moedas, onde o valor restante é multiplicado por 100 para lidar com valores fracionados em centavos.

```cpp
resto = (resto - (moeda1)) * 100;
moeda50 = resto / 50;
cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
```

O código continua com esse padrão até calcular todas as notas e moedas necessárias.

## Resultado

O programa calcula e exibe a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, considerando as diversas denominações. Ele lida com os valores de forma eficiente, calculando as notas maiores primeiro e depois as moedas. Caso algum valor seja zero, ele não é impresso, mantendo o resultado limpo e organizado.

🧮💰💵