# Explicação do Código - Soma dos Fatoriais

Este programa em C++ lê indefinidamente dois valores inteiros, M e N, e calcula a soma dos fatoriais de ambos os valores. É importante mencionar que o cálculo dos fatoriais é realizado de forma apropriada para lidar com números grandes, pois os resultados podem ter mais de 15 dígitos.

## Lógica do Programa

O código começa declarando três variáveis:

```cpp
int n, m;
long long nFat, mFat;
```

- `n` e `m`: Variáveis para armazenar os valores inteiros lidos.
- `nFat` e `mFat`: Variáveis do tipo `long long` para armazenar os fatoriais dos números `n` e `m`.

O programa entra em um loop `while` que continuará a ler pares de valores `n` e `m` até atingir o final do arquivo de entrada (EOF). Isso permite que o programa processe vários casos de teste.

Dentro do loop, os fatoriais de `n` e `m` são calculados usando loops `for`. A lógica é a seguinte:

```cpp
nFat = 1;
mFat = 1;
for (int i = 1; i <= n; i++) {
    nFat *= i;
}
for (int i = 1; i <= m; i++) {
    mFat *= i;
}
```

Esses loops calculam os fatoriais de `n` e `m` e armazenam os resultados nas variáveis `nFat` e `mFat`.

Por fim, a soma dos fatoriais de `n` e `m` é calculada e impressa na saída padrão:

```cpp
cout << nFat + mFat << endl;
```

## Resultado

O programa calcula corretamente a soma dos fatoriais de `n` e `m` para cada par de valores lidos da entrada e imprime o resultado correspondente.

✨🔢🎯