**Explicação do Código - Calibrando Pneus 🚗**

Este programa em C++ foi desenvolvido para ajudar a calibrar os pneus de um carro de forma simples e eficiente. O motorista fornece a pressão desejada (representada pela variável `n`) e a bomba de ar lê a pressão atual do pneu (representada pela variável `m`). O programa calcula a diferença entre a pressão desejada e a pressão lida e a imprime como resultado.

**Lógica do Programa**

O código começa declarando duas variáveis inteiras `n` e `m` para representar, respectivamente, a pressão desejada pelo motorista e a pressão lida pela bomba de ar.

```cpp
int n, m;
cin >> n >> m;
```

Em seguida, o programa calcula a diferença entre a pressão desejada e a pressão lida, que é simplesmente `n - m`, e imprime esse valor como resultado.

```cpp
cout << n - m << endl;
```

A saída é formatada de acordo com o enunciado, com a diferença entre as pressões desejada e lida seguida por uma quebra de linha.

Este código é extremamente simples e cumpre exatamente o que é solicitado pelo problema: calcular e exibir a diferença entre a pressão desejada e a pressão lida. É uma solução direta e eficaz para a tarefa de calibrar os pneus de um carro. 🚀