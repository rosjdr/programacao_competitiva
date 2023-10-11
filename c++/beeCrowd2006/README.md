**Explicação do Código - Identificando o Chá** ☕

Neste problema, o objetivo é determinar quantos competidores em uma competição de identificação de chá às escuras acertaram o tipo de chá, dado o tipo real de chá e as respostas dos competidores.

**Lógica do Programa** 🧠

O programa começa declarando duas variáveis inteiras: `cha` para representar o tipo real de chá e `chute` para representar a resposta dada por cada competidor. Além disso, declara uma variável `acertos` inicializada como 0 para contar o número de acertos:

```cpp
int cha, chute;
int acertos = 0;
```

Em seguida, o programa lê o tipo real de chá (variável `cha`) da entrada padrão (teclado):

```cpp
cin >> cha;
```

O programa entra em um loop `for` que irá iterar cinco vezes (para cada um dos cinco competidores). Dentro do loop, ele lê a resposta dada pelo competidor (variável `chute`) da entrada padrão:

```cpp
for (int i = 0; i < 5; i++) {
    cin >> chute;
```

Agora, vem a parte importante: o programa verifica se a resposta dada (`chute`) é igual ao tipo real de chá (`cha`). Se forem iguais, isso significa que o competidor acertou o tipo de chá, então incrementamos a variável `acertos`:

```cpp
    chute == cha ? acertos++ : acertos = acertos;
```

Este é um exemplo do operador condicional (ternário) em C++. Ele funciona da seguinte forma: a expressão à esquerda do `?` é avaliada (`chute == cha`), e se for verdadeira, a primeira expressão após o `?` é executada (`acertos++`). Se for falsa, a segunda expressão após `:` é executada (`acertos = acertos`). Isso significa que, se o chute for correto, `acertos` é incrementado em 1; caso contrário, `acertos` permanece o mesmo.

Finalmente, o programa imprime o número de competidores que acertaram o tipo de chá (variável `acertos`) na saída padrão:

```cpp
cout << acertos << endl;
```

Dessa forma, o programa conta e imprime quantos competidores acertaram o tipo de chá real. ☕✅🏆