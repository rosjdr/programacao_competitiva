# Explicação do Código - Encontrando o Maior Valor e Sua Posição

Este programa em C++ tem como objetivo encontrar o maior valor dentre uma lista de 100 números inteiros e identificar a posição em que esse maior valor se encontra nessa lista.

## Lógica do Programa

O código começa declarando três variáveis inteiras:

```cpp
int valor, maior = 0, pos;
```

- `valor`: Variável que armazenará o número inteiro lido a cada iteração.
- `maior`: Variável que guardará o maior valor encontrado até o momento, inicializada com zero.
- `pos`: Variável para armazenar a posição do maior valor na lista.

Em seguida, o programa entra em um loop `for` que se repete 100 vezes, lendo um valor inteiro a cada iteração:

```cpp
for(int i = 0; i < 100; i++) {
    cin >> valor;
```

Dentro desse loop, há uma verificação para determinar se o valor lido é maior do que o valor atualmente armazenado na variável `maior`. Se for maior, o valor lido substitui o valor em `maior`, e a posição é atualizada para `i + 1`, que representa a posição atual na lista (lembrando que as posições em programação começam em 0, por isso adicionamos 1):

```cpp
if(valor > maior) {
    maior = valor;
    pos = i + 1;
}
```

Após ler todos os 100 valores e realizar as devidas verificações, o programa imprime o maior valor encontrado e a posição desse valor na lista:

```cpp
cout << maior << endl << pos << endl;
```

## Resultado

O resultado é a identificação do maior valor na lista de 100 números inteiros e a posição desse valor. Isso permite encontrar qual número é o maior e em que posição ele apareceu na sequência.

🔝🔍📈