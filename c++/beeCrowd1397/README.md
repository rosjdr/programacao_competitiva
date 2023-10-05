**Explicação do Código - Jogo do Maior 🎲**

Este programa em C++ foi criado para ajudar Og a calcular os pontos em seu jogo favorito, o "Jogo do Maior". Neste jogo, Og e seu filho escolhem números de 0 a 10 em cada rodada, e o jogador que escolher o número mais alto ganha um ponto.

**Lógica do Programa**

O código começa lendo o número de rodadas, representado por `n`.

```cpp
int n;
cin >> n;
```

Em seguida, ele entra em um loop que irá executar o processo para cada partida. Se `n` for igual a 0, isso indica o final da entrada, e o programa encerra.

```cpp
while (n > 0) {
```

Dentro deste loop, o programa inicializa as variáveis `ta` (pontos de Og) e `tb` (pontos do filho) como 0. Essas variáveis serão usadas para contar os pontos de cada jogador.

```cpp
int ta = 0;
int tb = 0;
```

Em seguida, o programa entra em um loop interno que irá ler os números escolhidos por Og e seu filho em cada rodada. Para cada rodada, ele compara os números e atribui pontos ao jogador que escolheu o número mais alto.

```cpp
for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a > b) ta++; // Og ganha ponto
    if (b > a) tb++; // Filho ganha ponto
}
```

Após todas as rodadas, o programa imprime na saída os pontos de Og e seu filho, separados por um espaço.

```cpp
cout << ta << " " << tb << endl;
```

O código é eficiente e simples, pois apenas realiza comparações entre os números escolhidos em cada rodada e conta os pontos de acordo com as regras do jogo.

Agora, Og e seu filho podem jogar tranquilamente, sabendo que o programa irá calcular seus pontos corretamente! 🎯👨‍👦🎉