**Explicação do Código - A Biblioteca do Senhor Severino** 📚📖

Neste problema, você precisa ajudar o Senhor Severino a ordenar os códigos de seus livros em sua biblioteca. Os códigos dos livros estão em um formato específico e precisam ser ordenados numericamente.

**Lógica do Programa** 🤔

O programa começa incluindo a biblioteca `bits/stdc++.h` para acessar funcionalidades avançadas:

```cpp
#include "bits/stdc++.h"
using namespace std;
```

Em seguida, entra em um loop `while` que lê os casos de teste até o fim do arquivo:

```cpp
int n;
while (cin >> n) {
```

Dentro do loop, criamos um vetor `livros` para armazenar os códigos dos livros:

```cpp
vector<string> livros;
```

Em seguida, usamos um loop `for` para ler os `n` códigos dos livros e armazená-los no vetor `livros`:

```cpp
for (int i = 0; i < n; i++) {
    string livro;
    cin >> livro;
    livros.push_back(livro);
}
```

Neste ponto, o vetor `livros` contém os códigos dos livros não ordenados.

Agora, usamos a função `sort` para ordenar o vetor `livros` em ordem lexicográfica, o que resultará na ordenação numérica dos códigos:

```cpp
sort(livros.begin(), livros.end());
```

Por fim, usamos um loop `for` para imprimir os códigos dos livros ordenados:

```cpp
for (int i = 0; i < n; i++) {
    cout << livros[i] << endl;
}
```

Este loop percorre o vetor `livros` e imprime os códigos em ordem.

O programa continua lendo e ordenando os códigos dos livros para cada caso de teste até atingir o final do arquivo.

Em resumo, este programa lê e ordena os códigos dos livros do Senhor Severino, garantindo que eles sejam impressos em ordem numérica. 🔢📚✨