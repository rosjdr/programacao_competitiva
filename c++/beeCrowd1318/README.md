**Explicação do Código - Bilhetes Falsos 🎫**

Este programa em C++ foi desenvolvido para ajudar a determinar quantos bilhetes falsos estavam presentes em uma festa da escola, onde alguns visitantes compareceram com cópias falsas de bilhetes originais.

**Lógica do Programa**

O código começa lendo dois números, `n` e `m`, onde `n` representa o número de bilhetes originais e `m` representa o número de bilhetes coletados dos visitantes na festa.

```cpp
int n, m;
cin >> n >> m;
```

Em seguida, ele entra em um loop que irá processar vários casos de teste, até que `n` e `m` sejam iguais a zero, indicando o final da entrada.

```cpp
while (n != 0 && m != 0) {
```

Dentro do loop, o programa cria um mapa (`map`) chamado `entradas` para armazenar a contagem de cada bilhete.

```cpp
map<int, int> entradas;
```

A seguir, ele inicializa esse mapa com todos os bilhetes originais (de 1 a `n`) com contagem igual a zero.

```cpp
for (int i = 1; i <= n; i++) {
    entradas[i] = 0;
}
```

Depois disso, o programa entra em outro loop para contar a quantidade de cada bilhete coletado no pacote que o diretor lhe deu.

```cpp
for (int i = 0; i < m; i++) {
    int p;
    cin >> p;
    entradas[p]++;
}
```

Em seguida, o programa calcula a quantidade de bilhetes repetidos, ou seja, aqueles que têm mais de uma cópia presente no pacote.

```cpp
int repetidos = 0;
for (int i = 1; i <= n; i++) {
    if (entradas[i] > 1) {
        repetidos++;
    }
}
```

Finalmente, ele imprime o número de bilhetes falsos, ou seja, o número de bilhetes repetidos.

```cpp
cout << repetidos << endl;
```

O código é eficiente e lida bem com grandes quantidades de bilhetes, pois utiliza um mapa para fazer a contagem de cada bilhete. Assim, Og pode ajudar a escola a identificar as cópias falsas e manter a integridade dos eventos futuros! 🎉🎫🔍