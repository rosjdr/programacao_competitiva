**Explicação do Código - Sobrenome Não é Fácil** 🧐

Neste problema, a tarefa é determinar se um sobrenome é "fácil" ou "difícil" de pronunciar, com base na presença de três ou mais consoantes consecutivas na sequência de letras do sobrenome.

**Lógica do Programa** 💡

O programa começa lendo o número de casos de teste, representado por `n`:

```cpp
int n;
cin >> n;
```

Em seguida, ele entra em um loop que irá executar `n` vezes, tratando cada caso de teste individualmente. Dentro deste loop, o programa lê o sobrenome atual da entrada:

```cpp
string sobrenome;
cin >> sobrenome;
```

Ele inicializa uma variável chamada `consoantesConsecutivas` como 0. Essa variável será usada para contar o número de consoantes consecutivas no sobrenome:

```cpp
int consoantesConsecutivas = 0;
```

O programa, então, começa a percorrer cada caractere do sobrenome, usando um loop `for`. Para facilitar a verificação, ele transforma o caractere atual em minúsculo (caso ele seja uma letra) usando a função `tolower`:

```cpp
for(int j = 0; j < sobrenome.length(); j++) {
    char c = (char) tolower(sobrenome[j]);
```

A variável `vogais` é uma string que contém as letras vogais do alfabeto: "aeiou". O programa verifica se o caractere atual não é uma vogal (ou seja, se não está presente na string `vogais`). Se não for uma vogal, incrementa a variável `consoantesConsecutivas` em 1. Caso contrário, ele reinicia a contagem para 0:

```cpp
if (vogais.find(c) == -1) {
    consoantesConsecutivas++;
} else {
    consoantesConsecutivas = 0;
}
```

O programa faz isso para cada caractere do sobrenome, de modo a contar quantas consoantes consecutivas existem na sequência. Se, em algum momento, `consoantesConsecutivas` atingir o valor de 3 ou mais, o programa interrompe o loop usando `break`. Isso significa que um sobrenome com três ou mais consoantes consecutivas é considerado "difícil".

Finalmente, o programa verifica o valor de `consoantesConsecutivas` após o loop. Se for maior ou igual a 3, o programa imprime que o sobrenome "não é fácil", caso contrário, imprime que o sobrenome "é fácil". Isso é feito para cada caso de teste no loop `for`:

```cpp
if (consoantesConsecutivas >= 3)
    cout << sobrenome << " nao eh facil" << endl;
else
    cout << sobrenome << " eh facil" << endl;
```

Assim, o programa determina e imprime se cada sobrenome é "fácil" ou "difícil" com base na regra das três consoantes consecutivas. 🧄🍓🗣️🇧🇷