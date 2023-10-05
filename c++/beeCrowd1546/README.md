**Explicação do Código - Responsabilidade de Feedbacks 💌**

Este programa em C++ foi desenvolvido para ajudar a equipe do portal IRU a atribuir responsabilidades aos membros da equipe para resolver feedbacks. Os feedbacks podem ser de quatro categorias diferentes: elogios, bugs, dúvidas e sugestões. Cada categoria é atribuída a um membro específico da equipe.

**Lógica do Programa**

O código começa lendo o número de casos de teste, representado por `n`.

```cpp
int n, k;
cin >> n;
```

Em seguida, ele entra em um loop que irá executar o processo para cada caso de teste. Dentro deste loop, o programa lê o número de feedbacks recebidos naquele dia, representado por `k`.

```cpp
for (int i = 0; i < n; i++) {
    cin >> k;
```

Dentro do segundo loop, o programa lê a categoria de cada feedback, representada por `f`, e utiliza um switch para determinar qual membro da equipe é responsável por essa categoria.

```cpp
for (int j = 0; j < k; j++) {
    int f;
    cin >> f;
    switch (f) {
        case 1:
            cout << "Rolien" << endl;
            break;
        case 2:
            cout << "Naej" << endl;
            break;
        case 3:
            cout << "Elehcim" << endl;
            break;
        case 4:
            cout << "Odranoel" << endl;
            break;
    }
}
```

O código é relativamente simples, pois utiliza estruturas condicionais para direcionar cada feedback para o membro correto da equipe. Cada categoria de feedback é associada a um nome de membro da equipe, e o programa imprime o nome do membro responsável na saída.

A solução é eficiente e direta, lidando com múltiplos casos de teste e categorizando cada feedback de acordo com a equipe responsável. 💌👩‍💼👨‍💼