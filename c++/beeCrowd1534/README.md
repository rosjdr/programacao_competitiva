# Explicação do Código - Impressão de Matriz Especial

Este programa em C++ tem como objetivo imprimir uma matriz especial com base no tamanho `N` fornecido como entrada. A matriz é formada por números 1, 2 e 3, seguindo um padrão específico.

## Lógica do Programa

O código começa declarando uma variável `n` para armazenar o tamanho da matriz, que é lido da entrada padrão.

```cpp
int n;
```

Em seguida, ele entra em um loop `while` que continua até o final do arquivo (EOF) ser alcançado. Para cada caso de teste, o programa cria uma matriz `n x n` e a preenche de acordo com o padrão estabelecido.

```cpp
while (cin >> n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + 1) + (j + 1) == n + 1)
                cout << 2;
            else if (i == j)
                cout << 1;
            else
                cout << 3;
        }
        cout << endl;
    }
}
```

- O primeiro loop `for` controla as linhas da matriz.
- O segundo loop `for` controla as colunas da matriz.
- A condição `if ((i + 1) + (j + 1) == n + 1)` verifica se a soma dos índices da linha e da coluna é igual a `n + 1`. Se for verdadeira, o programa imprime o número 2.
- A condição `else if (i == j)` verifica se o índice da linha é igual ao índice da coluna. Se for verdadeira, o programa imprime o número 1.
- Se nenhuma das condições anteriores for atendida, o programa imprime o número 3.

## Resultado

O programa imprime a matriz especial com base no tamanho `N` fornecido como entrada. A matriz segue o padrão especificado: 1 na diagonal principal, 2 na diagonal secundária e 3 nas demais posições.

Essa matriz pode ser usada em diversos contextos, como problemas de lógica matemática ou desafios de programação que envolvam matrizes especiais.

🔲🔳📐