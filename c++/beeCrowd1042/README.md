# Explicação do Código - Ordenação de Três Números

Este programa em C++ lê três números inteiros e os ordena em ordem crescente, em seguida, imprime os valores ordenados seguidos pelos valores na sequência em que foram lidos.

## Lógica do Programa

O código começa declarando três variáveis inteiras, `a`, `b` e `c`, para armazenar os três números:

```c++
int a, b, c;
```

Em seguida, o programa lê os três números da entrada padrão:

```c++
cin >> a >> b >> c;
```

A ordenação dos números é feita utilizando condicionais `if`, onde comparamos cada número com os outros para determinar a ordem crescente. A lógica é a seguinte:

1. Primeiro, comparamos se `a` é menor ou igual a `b` e se `a` é menor ou igual a `c`. Se essa condição for verdadeira, significa que `a` é o menor número, e o programa imprime `a`. Em seguida, ele verifica se `b` é menor ou igual a `c`. Se for, imprime `b` e `c` (em ordem crescente), caso contrário, imprime `c` e `b`.

```c++
if (a <= b && a <= c) {
    cout << a << endl;
    if (b <= c)
        cout << b << endl << c << endl;
    else
        cout << c << endl << b << endl;
}
```

2. Em seguida, o programa verifica se `b` é o menor número, repetindo a mesma lógica:

```c++
if (b <= a && b <= c) {
    cout << b << endl;
    if (a <= c)
        cout << a << endl << c << endl;
    else
        cout << c << endl << a << endl;
}
```

3. Por fim, se nenhuma das condições anteriores for atendida, isso significa que `c` é o menor número, e o programa segue a mesma lógica:

```c++
if (c <= a && c <= b) {
    cout << c << endl;
    if (a <= b)
        cout << a << endl << b << endl;
    else
        cout << b << endl << a << endl;
}
```

Depois de imprimir os números ordenados em ordem crescente, o programa insere uma linha em branco e, em seguida, imprime os três números na sequência em que foram lidos:

```c++
cout << endl << a << endl << b << endl << c << endl;
```

## Resultado

O resultado é a ordenação dos três números em ordem crescente, seguida pelos mesmos números na sequência em que foram lidos.

🔢🆙📊