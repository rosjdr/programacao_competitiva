## Explicação do Código - Cálculo da Quantidade de Páginas de um Livro

Este programa em C++ calcula a quantidade de páginas de um livro com base na velocidade de leitura do usuário. Ele determina quantos dias seriam necessários para ler o livro a uma taxa de leitura específica e, em seguida, calcula o número total de páginas do livro.

### Lógica do Programa

O código começa declarando três variáveis inteiras: `q` (quantidade de páginas lidas por dia), `d` (quantidade de dias adiantados) e `p` (quantidade de páginas lidas por dia no novo cenário).

```cpp
int q, d, p;
```

Em seguida, o programa lê o valor de `q`, que representa a quantidade de páginas lidas por dia no cenário inicial.

```cpp
cin >> q;
```

O programa entra em um loop `while` que continua até que `q` seja igual a zero, indicando o fim da entrada.

```cpp
while (q != 0) {
    cin >> d >> p;
    // Cálculo da quantidade total de dias necessários
    double t = 1.0 * (p * d) / (p - q); // Usamos 1.0 para evitar erros de arredondamento
    // Cálculo do número total de páginas
    int n = t * q;
    // Verificação para imprimir "pagina" ou "paginas" corretamente
    n == 1 ? cout << n << " pagina\n" : cout << n << " paginas\n";
    cin >> q;
}
```

Dentro do loop, o programa lê os valores de `d` (quantidade de dias adiantados) e `p` (quantidade de páginas lidas por dia no novo cenário). Em seguida, calcula o número total de dias necessários para ler o livro a uma taxa de `p` páginas por dia usando a fórmula:

\[t = \frac{pd}{p - q}\]

Depois, o programa calcula o número total de páginas lidas, multiplicando a quantidade de páginas lidas por dia (`q`) pelo total de dias (`t`). Finalmente, ele verifica se a quantidade é igual a 1 para imprimir "pagina" no singular ou "paginas" no plural, conforme necessário.

### Resultado

O programa fornece a quantidade de páginas do livro com base na taxa de leitura do usuário e na quantidade de dias adiantados. Ele é capaz de lidar com diferentes cenários de leitura e fornece a resposta correta.

📖🔢📅