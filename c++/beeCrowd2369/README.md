**Explicação do Código - Conta de Água 💧**

Este programa em C++ foi desenvolvido para calcular o valor da conta de água de uma residência com base no seu consumo em metros cúbicos (m³). A empresa de abastecimento de água (SBC) tem uma estrutura de preços escalonados, onde o valor por metro cúbico varia de acordo com a faixa de consumo.

**Lógica do Programa**

O código começa declarando duas variáveis inteiras: `n` para representar o consumo de água da residência e `total` para armazenar o valor total da conta de água.

```cpp
int n, total = 0;
cin >> n;
```

Em seguida, o programa verifica em qual faixa de consumo o valor `n` se encaixa e calcula o valor da conta com base nas faixas de preços especificadas.

- Se o consumo for menor ou igual a 10 m³, o valor da conta é fixo em R$ 7.

```cpp
if (n <= 10) cout << 7 << endl;
```

- Se o consumo estiver na faixa de 11 a 30 m³, o programa calcula o valor da conta adicionando o valor fixo da assinatura básica (R$ 7) mais o valor proporcional ao consumo excedente a 10 m³ (R$ 1 por m³ excedente).

```cpp
if (n >= 11 && n <= 30) cout << 7 + ((n - 10) * 1) << endl;
```

- Se o consumo estiver na faixa de 31 a 100 m³, o programa calcula o valor da conta adicionando o valor fixo da assinatura básica (R$ 7), o valor proporcional ao consumo entre 11 e 30 m³ (R$ 20), e o valor proporcional ao consumo excedente a 30 m³ (R$ 2 por m³ excedente).

```cpp
if (n >= 31 && n <= 100) cout << 7 + 20 + ((n - 30) * 2) << endl;
```

- Se o consumo for maior que 100 m³, o programa calcula o valor da conta adicionando o valor fixo da assinatura básica (R$ 7), o valor proporcional ao consumo entre 11 e 30 m³ (R$ 20), o valor proporcional ao consumo entre 31 e 100 m³ (R$ 140), e o valor proporcional ao consumo excedente a 100 m³ (R$ 5 por m³ excedente).

```cpp
if (n >= 101) cout << 7 + 20 + 140 + ((n - 100) * 5) << endl;
```

Este código é uma solução direta para calcular o valor da conta de água com base no consumo em metros cúbicos, seguindo as regras estabelecidas pela empresa de abastecimento de água. Ele divide o cálculo em várias condições, dependendo da faixa de consumo, para garantir que o preço seja calculado corretamente. 💧🏠