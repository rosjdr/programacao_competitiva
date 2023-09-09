## Explicação do Código - Colhedora de Minhocas 🐛🌾

Este programa em C++ tem como objetivo calcular o número esperado total de minhocas a serem colhidas por uma máquina colhedora em um campo experimental de minhocas. A máquina move-se em linha reta, colhendo todas as minhocas em uma coluna ou linha do campo, escolhendo aquela que oferece a maior produtividade estimada.

### Lógica do Programa

O código começa lendo dois números inteiros da entrada padrão: `N` (número de linhas) e `M` (número de colunas), representando as dimensões do campo experimental de minhocas.

```cpp
int n, m;
cin >> n >> m;
```

Em seguida, cria uma matriz `c` de dimensões `N x M` para armazenar as produtividades estimadas das células do campo.

```cpp
int c[n][m];
```

O programa lê as produtividades estimadas de cada célula do campo e as armazena na matriz `c`.

```cpp
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        cin >> c[i][j];
```

Para calcular o número esperado total de minhocas a serem colhidas, o programa realiza duas etapas principais:

#### 1. Soma das Linhas e Colunas

Ele calcula a soma das produtividades estimadas das células em cada linha e em cada coluna do campo e armazena essas somas em dois vetores: `somaLinhas` e `somaColunas`.

```cpp
int somaLinhas[n], somaColunas[m];
for (int i = 0; i < n; i++) {
    somaLinhas[i] = 0;
    for (int j = 0; j < m; j++) {
        somaLinhas[i] += c[i][j];
    }
}
for (int j = 0; j < m; j++) {
    somaColunas[j] = 0;
    for (int i = 0; i < n; i++) {
        somaColunas[j] += c[i][j];
    }
}
```

#### 2. Encontrar a Maior Soma

O programa determina qual é a maior soma entre as somas das linhas e das colunas. Essa soma representa a linha ou coluna escolhida pela máquina colhedora para a colheita, pois garante o maior número de minhocas.

```cpp
int maior = 0;
for (int i = 0; i < n; i++) {
    if (somaLinhas[i] > maior) maior = somaLinhas[i];
}
for (int i = 0; i < m; i++) {
    if (somaColunas[i] > maior) maior = somaColunas[i];
}
```

Por fim, o programa imprime o valor da maior soma, que representa o número esperado total de minhocas colhidas.

```cpp
cout << maior << endl;
```

### Resultado

O programa fornece o número esperado total de minhocas a serem colhidas pela máquina colhedora, escolhendo a linha ou coluna que oferece a maior produtividade estimada.

🌾🚜📊