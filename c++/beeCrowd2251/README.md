## Explicação do Código - Torres de Hanói 🧩

Este programa em C++ tem como objetivo calcular o número de movimentos necessários para resolver o quebra-cabeça das Torres de Hanói com N discos. O algoritmo utilizado para resolver esse problema é baseado na recursão.

### Lógica do Programa

O código inicia lendo um número inteiro `N`, que representa o número de discos no quebra-cabeça. Ele usa um loop `while` para processar vários conjuntos de teste, onde cada conjunto é identificado pelo valor de `N`. O final da entrada é indicado quando `N` é igual a zero.

```cpp
int n, contTeste = 0;
cin >> n;
while (n != 0) {
    // Código de processamento para cada conjunto de teste
    cin >> n; // Ler próximo valor de N para o próximo conjunto de teste
}
```

Dentro do loop, para cada conjunto de teste, o programa calcula o número de movimentos necessários para resolver o quebra-cabeça das Torres de Hanói com `N` discos. O número de movimentos é calculado pela fórmula `(2^N) - 1`, onde `^` representa a operação de potência. Isso é feito usando a função `pow` da biblioteca `<cmath>`.

```cpp
cout << "Teste " << ++contTeste << endl << (long)pow(2, n) - 1 << endl << endl;
```

O código acima imprime três linhas para cada conjunto de teste:
1. A primeira linha identifica o conjunto de teste no formato "Teste n", onde `n` é o número sequencial do conjunto.
2. A segunda linha contém o número de movimentos calculados.
3. A terceira linha é deixada em branco para seguir o formato especificado na saída.

### Resultado

O programa fornece o número de movimentos necessários para resolver o quebra-cabeça das Torres de Hanói com `N` discos para cada conjunto de teste.

🧩🤖🔢