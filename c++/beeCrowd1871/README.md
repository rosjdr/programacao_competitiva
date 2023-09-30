**Explicação do Código - Soma de Números sem Zeros 🧮**

Este programa em C++ tem como objetivo somar dois números inteiros sem o algarismo zero, realizar a soma e exibir o resultado sem os algarismos zero.

**Lógica do Programa**

O código começa declarando duas variáveis inteiras `n` e `m` para armazenar os números a serem somados. Em seguida, entra em um loop `while` que continua executando enquanto ambos os números `n` e `m` não forem iguais a zero.

```cpp
int n, m;
cin >> n >> m;
while (n != 0 && m != 0) {
    string s = to_string(n + m);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0') cout << s[i];
    }
    cout << endl;
    cin >> n >> m;
}
```

A cada iteração do loop, o programa lê dois números inteiros `n` e `m` da entrada padrão.

Em seguida, ele realiza a soma `n + m` e converte o resultado em uma string `s` usando a função `to_string`.

```cpp
string s = to_string(n + m);
```

A conversão para string é necessária para que seja possível percorrer cada dígito do resultado.

Depois, o programa entra em outro loop `for` que percorre cada caractere da string `s`. Dentro deste loop, ele verifica se o caractere atual é diferente de '0' e, se for, imprime o caractere.

```cpp
for (int i = 0; i < s.length(); i++) {
    if (s[i] != '0') cout << s[i];
}
```

Essa verificação remove os algarismos zero do resultado da soma.

Por fim, o programa imprime uma quebra de linha para separar os resultados de cada caso de teste e lê os próximos valores de `n` e `m` para a próxima iteração do loop.

O programa continua executando até que `n` e `m` sejam iguais a zero, momento em que ele encerra a execução.

Este código realiza a operação conforme o solicitado, somando os números e exibindo o resultado sem os algarismos zero.v