# Explicação do Código - Sequência de Fibonacci

Este programa em C++ tem como objetivo gerar e imprimir os primeiros N números da famosa sequência de Fibonacci. A sequência de Fibonacci é uma série onde cada número, a partir do terceiro, é a soma dos dois números anteriores. A série começa com 0 e 1.

## Lógica do Programa

O código começa declarando três variáveis inteiras: `n` (para armazenar o número de termos da sequência a serem gerados), `ant` (para armazenar o termo anterior) e `atual` (para armazenar o termo atual).

```cpp
int n, ant, atual;
```

Em seguida, o programa lê o valor de `n` da entrada padrão.

```cpp
cin >> n;
```

O programa inicia a sequência de Fibonacci com os dois primeiros números, que são sempre 0 e 1, e os imprime.

```cpp
cout << "0 1";
ant = 0;
atual = 1;
```

A partir do terceiro termo, o programa entra em um loop que executa `n - 2` vezes (pois os dois primeiros termos já foram impressos). Em cada iteração do loop, o programa calcula o próximo termo da sequência, que é a soma dos dois termos anteriores.

```cpp
for (int i = 2; i < n; i++) {
    int aux = atual;
    atual += ant;
    ant = aux;
    cout << " " << atual;
}
```

O resultado é impresso na mesma linha, separado por espaços, até que os primeiros N termos da sequência sejam gerados.

## Resultado

O programa gera e imprime os primeiros N números da sequência de Fibonacci, que é amplamente utilizada em matemática e ciência da computação.

Esta sequência é um excelente exemplo de um problema de programação que envolve recursão e é frequentemente usado em exercícios introdutórios de programação.

🔢👨‍💻👩‍💻