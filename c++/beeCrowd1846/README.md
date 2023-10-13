**Explicação do Código - Número Para Nome** 🧮

Neste problema, a tarefa é converter números inteiros em seus nomes por extenso em português. O programa deve receber uma lista de números e imprimir seus nomes correspondentes.

**Lógica do Programa** 💡

O código faz a conversão de números inteiros em palavras por extenso. Ele possui três arrays de strings: `numeros`, `dezAteDezenove`, `dezenas` e `centenas`, que contêm os nomes de 0 a 9, os números de 10 a 19, os múltiplos de 10 (20, 30, 40, etc.) e as centenas (100, 200, 300, etc.), respectivamente. Esses arrays são usados para construir o nome por extenso do número de entrada.

O programa lê um número `n` da entrada padrão, que é o número a ser convertido:

```cpp
long n;
while (cin >> n) {
    // ...
}
```

Ele também declara uma variável `extenso` como uma string vazia. Essa variável será usada para construir o nome do número em formato de texto:

```cpp
string extenso = "";
```

Em seguida, o código divide o número em partes (centena de milhar, dezena de milhar, unidade de milhar, centena, dezena e unidade) usando operações de divisão e módulo. Por exemplo, se o número é 123456, ele divide em `centenaMilhar = 1`, `dezenaMilhar = 2`, `unidadeMilhar = 3`, `centena = 4`, `dezena = 5` e `unidade = 6`:

```cpp
int centenaMilhar = n / 100000;
n = n - (centenaMilhar * 100000);
int dezenaMilhar = n / 10000;
n = n - (dezenaMilhar * 10000);
int unidadeMilhar = n / 1000;
n = n - (unidadeMilhar * 1000);
int centena = n / 100;
n = n - (centena * 100);
int dezena = n / 10;
n = n - (dezena * 10);
```

Em seguida, o programa verifica cada uma dessas partes e adiciona o nome correspondente à string `extenso`. Ele começa verificando as partes especiais, como "cem mil", "dez mil" e "mil":

```cpp
if (n == 100000) {
    extenso = "cem mil";
} else if (n == 10000) {
    extenso = "dez mil";
} else if (n == 1000) {
    extenso = "mil";
}
```

Então, o programa verifica se há uma centena de milhar, dezena de milhar, unidade de milhar, centena, dezena e unidade e acrescenta seus nomes por extenso à variável `extenso`. Ele também adiciona "e" como conectivo, conforme necessário:

```cpp
if (centenaMilhar > 0) {
    if (centenaMilhar == 1 && dezenaMilhar == 0 && unidadeMilhar == 0) {
        extenso = "cem";
    } else {
        extenso = centenas[centenaMilhar - 1];
    }
}

if (dezenaMilhar == 1) {
    if (extenso.length() > 0) extenso += " e " + dezAteDezenove[unidadeMilhar];
    else extenso = dezAteDezenove[unidadeMilhar];
} else if (dezenaMilhar > 1) {
    if (extenso.length() > 0) extenso += " e " + dezenas[dezenaMilhar - 2];
    else extenso = dezenas[dezenaMilhar - 2];
}

if (unidadeMilhar > 0 && dezenaMilhar != 1) {
    if (extenso.length() == 0 && unidadeMilhar == 1) extenso += "mil";
    else if (extenso.length() > 0) extenso += " e " + numeros[unidadeMilhar];
    else extenso = numeros[unidadeMilhar];
}
```

Por fim, o programa verifica as centenas e dezenas e as unidades, acrescentando seus nomes ao nome por extenso:

```cpp
if (centena > 0) {
    if (centena == 1 && dezena == 0 && unidade == 0) {
        if (extenso.length() > 0) extenso += " e cem";
        else extenso = "cem";
    } else if (extenso.length() > 0) {
        if (dezena == 0 && unidade == 0) extenso += " e " + centenas[centena - 1];
        else extenso += " " + centenas[centena - 1];
    } else {
        extenso += centenas[centena -

 1];
    }
}

if (dezena == 1) {
    if (extenso.length() > 0) extenso += " e " + dezAteDezenove[unidade];
    else extenso += dezAteDezenove[unidade];
} else if (dezena > 1) {
    if (extenso.length() > 0) extenso += " e " + dezenas[dezena - 2];
    else extenso += dezenas[dezena - 2];
}

if (unidade > 0 && dezena != 1) {
    if (extenso.length() > 0) extenso += " e " + numeros[unidade];
    else extenso += numeros[unidade];
}
```

O programa adiciona a palavra "mil" se o número for maior que 0 e não for a palavra "mil", e, por fim, imprime o nome do número por extenso:

```cpp
cout << extenso << endl;
```

Isso permite que o programa converta números inteiros em seus nomes por extenso em português de forma precisa e legível. 🕐📜🇧🇷