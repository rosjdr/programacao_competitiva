**Explicação do Código - Contando Filhos e Filhas de Og 🦕**

Este programa em C++ foi desenvolvido para ajudar Og, um homem das cavernas, a contar seus filhos com uma mão (representada pela variável `l`) e suas filhas com a outra mão (representada pela variável `r`). Og deseja saber o total de filhos e filhas que ele possui, mas ele não consegue somar os números por conta própria. Portanto, o programa realiza a soma e fornece a resposta.

**Lógica do Programa**

O código começa declarando duas variáveis inteiras `l` e `r` para representar o número de filhos e filhas que Og tem, respectivamente.

```cpp
int l, r;
cin >> l >> r;
```

Em seguida, entra em um loop `while` que executa enquanto tanto `l` quanto `r` forem diferentes de zero. Isso significa que o programa vai continuar lendo e processando casos de teste até que ambos `l` e `r` sejam iguais a zero, indicando o fim do arquivo de entrada.

```cpp
while (l != 0 && r != 0) {
    cout << l + r << endl;
    cin >> l >> r;
}
```

Dentro do loop, o programa calcula a soma de `l` e `r` e imprime o resultado. Isso corresponde à contagem total de filhos e filhas de Og. A resposta é seguida por uma quebra de linha para separar os resultados dos diferentes casos de teste.

A estrutura do loop `while` permite que o programa processe vários casos de teste, lendo os valores de `l` e `r` e calculando as somas até que um caso com `l` e `r` iguais a zero seja encontrado, indicando o fim do arquivo de entrada.

Este código é simples e eficaz, resolvendo o problema de contar filhos e filhas de Og de forma direta e eficiente.