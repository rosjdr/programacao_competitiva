# Explicação do Código - Voluntários Desaparecidos

Este programa em C++ lida com uma situação crítica após um terremoto na cidade de Nlogônia. Mergulhadores voluntários desceram a grandes profundidades para consertar um dique de contenção danificado. O objetivo do programa é identificar quais voluntários não retornaram dos mergulhos, com base nas placas de identificação deixadas por eles.

## Lógica do Programa

O código começa declarando variáveis para armazenar o número total de voluntários (`n`), o número de voluntários que retornaram do mergulho (`r`), e uma lista (`vivos`) para registrar os voluntários que voltaram com segurança.

```cpp
int n, r;
list<int> vivos;
```

O programa entra em um loop `while` que lê vários casos de teste até que o final do arquivo (EOF) seja alcançado. Para cada caso de teste, o programa lê o número total de voluntários (`n`) e o número de voluntários que retornaram (`r`).

Em seguida, o programa verifica se o número de voluntários que retornaram é menor do que o número total de voluntários. Se for, isso significa que alguns voluntários não retornaram. O programa lê os identificadores dos voluntários que voltaram com segurança e os armazena na lista `vivos`.

```cpp
if (r < n) {
    vivos.clear(); // Limpa a lista de voluntários vivos
    for (int i = 0; i < r; i++) {
        int vivo;
        cin >> vivo;
        vivos.push_back(vivo);
    }
    // Itera sobre todos os voluntários e verifica quem não voltou
    for (int i = 1; i <= n; i++) {
        std::list<int>::iterator findIter = std::find(vivos.begin(), vivos.end(), i);
        if (findIter == vivos.end()) {
            cout << i << " ";
        }
    }
    cout << endl;
} else {
    for (int i = 0; i < r; i++) {
        int vivo;
        cin >> vivo;
    }
    cout << "*" << endl;
}
```

- Se o número de voluntários que retornaram for igual ao número total de voluntários (`r == n`), isso significa que todos retornaram com segurança, e o programa imprime um asterisco (*).

- Caso contrário, o programa itera sobre todos os voluntários (de 1 a `n`) e verifica se cada um está na lista de voluntários vivos. Aqueles que não estão na lista são identificados como não tendo retornado.

## Resultado

O programa identifica corretamente quais voluntários não retornaram dos mergulhos e os imprime em ordem crescente de identificação. Se todos retornaram, ele imprime um asterisco (*).


🆘🌊🏊‍♂️