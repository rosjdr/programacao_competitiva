**Explicação do Código - Gasto de Combustível 🚗⛽**

Este programa em C++ tem como objetivo calcular a quantidade de litros de combustível gastos em uma viagem, dadas duas informações: o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). O cálculo é feito com base no consumo de um automóvel que faz 12 km por litro.

**Lógica do Programa**

O código começa declarando as variáveis necessárias:

```cpp
int tempo, velocidade, distancia;
double litros;
```

- `tempo` armazena o tempo gasto na viagem (em horas).
- `velocidade` armazena a velocidade média durante a viagem (em km/h).
- `distancia` irá armazenar a distância percorrida, que será calculada multiplicando `tempo` por `velocidade`.
- `litros` irá armazenar a quantidade de litros de combustível gastos, que será calculada dividindo `distancia` por 12.0 (12 km por litro).

Em seguida, o programa lê as informações de entrada:

```cpp
cin >> tempo >> velocidade;
```

A distância percorrida é calculada multiplicando o tempo pela velocidade média:

```cpp
distancia = tempo * velocidade;
```

E finalmente, a quantidade de litros de combustível é calculada dividindo a distância por 12.0 (usando 12.0 para garantir a precisão da divisão real):

```cpp
litros = distancia / 12.0;
```

A saída é formatada para exibir o valor com três casas decimais após o ponto decimal usando a função `printf`:

```cpp
printf("%.3lf\n", litros);
```

Isso garante que o resultado seja exibido corretamente.

Em resumo, o programa é simples e eficiente, calculando a quantidade de litros de combustível necessários para uma viagem com base no tempo e na velocidade média fornecidos, considerando um consumo de 12 km por litro. Joãozinho está pronto para calcular seus gastos de combustível em suas próximas viagens! 🚗💨⛽