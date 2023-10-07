**Explicação do Código - Zerinho ou Um 🕹️**

Neste problema, Alice, Beto e Clara estão jogando o jogo "Zerinho ou Um", onde cada jogador escolhe entre 0 ou 1, e o objetivo é determinar o vencedor com base nas escolhas deles. Se todos escolherem o mesmo número, não há vencedor. Caso contrário, o vencedor é aquele que escolheu um número diferente dos outros.

**Lógica do Programa**

O código começa declarando três variáveis para armazenar as escolhas de Alice, Beto e Clara:

```cpp
int a, b, c;
```

Em seguida, entra em um loop que lê as escolhas dos jogadores enquanto houver entrada para ser lida:

```cpp
while (cin >> a >> b >> c)
```

Dentro desse loop, o programa verifica as combinações de escolhas para determinar o vencedor ou se não há um vencedor. O programa segue as seguintes regras:

- Se Alice escolheu um número diferente dos outros dois (ou seja, `a != b` e `a != c`), então Alice é o vencedor e o programa imprime "A".

- Se Beto escolheu um número diferente dos outros dois (ou seja, `b != a` e `b != c`), então Beto é o vencedor e o programa imprime "B".

- Se Clara escolheu um número diferente dos outros dois (ou seja, `c != a` e `c != b`), então Clara é a vencedora e o programa imprime "C".

- Se todos escolheram o mesmo número (ou seja, `a == b` e `a == c`), então não há vencedor e o programa imprime "*".

O programa repete esse processo para cada conjunto de escolhas lidas da entrada.

Em resumo, este código eficiente e simples determina o vencedor do jogo "Zerinho ou Um" com base nas escolhas de Alice, Beto e Clara e imprime o resultado correspondente. A amizade deles continua forte, independentemente de quem vença! 🎮🏆👏