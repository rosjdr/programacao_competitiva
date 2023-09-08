# Explicação do Código - Classificação de Números

Este programa em C++ lê um valor inteiro `N`, que representa a quantidade de números a serem lidos em seguida. Para cada número lido, ele determina se o número é par (EVEN) ou ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE), e exibe a mensagem correspondente. Se o número for igual a zero, a mensagem "NULL" é exibida.

## Lógica do Programa

O código começa declarando duas variáveis, `valor` para armazenar cada número lido e `n` para armazenar a quantidade de números a serem lidos:

```c++
long valor, n;
```

Em seguida, ele lê o valor de `n` da entrada:

```c++
cin >> n;
```

O programa utiliza um loop `for` para ler os números e classificá-los:

```c++
for(int i = 0; i < n; i++){
    cin >> valor;
```

Dentro do loop, ele verifica se o valor é igual a zero, e se for, exibe "NULL":

```c++
if (valor == 0)
    cout << "NULL\n";
```

Se o valor não for zero, ele verifica se é par (EVEN) ou ímpar (ODD) e se é positivo (POSITIVE) ou negativo (NEGATIVE) e exibe as mensagens correspondentes:

```c++
else {
    valor % 2 == 0 ? cout << "EVEN " : cout << "ODD ";
    valor > 0 ? cout << "POSITIVE\n" : cout << "NEGATIVE\n";
}
```

- `valor % 2 == 0` verifica se o valor é par.
- `valor > 0` verifica se o valor é positivo.

## Resultado

O resultado é a classificação de cada número lido com as mensagens "EVEN" ou "ODD" para par ou ímpar, e "POSITIVE" ou "NEGATIVE" para positivo ou negativo. Se o número for zero, a mensagem "NULL" é exibida.

🔢✨📊