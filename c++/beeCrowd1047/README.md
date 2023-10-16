# Solução do Problema de Tempo de Jogo em C++

Neste arquivo, vou explicar a solução implementada em C++ para o problema de calcular a duração de um jogo com base nas horas de início e fim. O código foi desenvolvido para atender aos requisitos do problema e fornece a saída desejada.

## Descrição do Problema

O problema consiste em ler quatro números inteiros que representam a hora de início (hi), minuto de início (mi), hora de fim (hf) e minuto de fim (mf) de um jogo. Em seguida, o objetivo é calcular a duração do jogo em horas e minutos, com algumas regras:

- O jogo deve ter uma duração mínima de 1 minuto.
- O jogo deve ter uma duração máxima de 24 horas.

## O Código em C++

Aqui está o código em C++ que resolve o problema:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int hi, mi, hf, mf;
    int hd, md;
    cin >> hi >> mi >> hf >> mf;

    // Cálculo da duração dos minutos (md)
    if (mf >= mi) {
        md = mf - mi;
    } else {
        md = (60 - mi) + mf;
        hf -= 1;
    }

    // Cálculo da duração das horas (hd)
    if (hf > hi) {
        hd = hf - hi;
    } else if (hf == hi && md == 0) {
        hd = 24;
    } else if (hf == hi && md > 0) {
        hd = 0;
    } else {
        hd = (24 - hi) + hf;
    }

    // Saída formatada
    cout << "O JOGO DUROU " << hd << " HORA(S) E " << md << " MINUTO(S)" << endl;

    return 0;
}
```

## Explicação do Código

Vamos analisar o código passo a passo:

- Declaramos quatro variáveis inteiras para representar a hora de início (hi), minuto de início (mi), hora de fim (hf) e minuto de fim (mf).

- Em seguida, declaramos duas variáveis inteiras adicionais para representar a duração das horas (hd) e dos minutos (md).

```cpp
int hi, mi, hf, mf;
int hd, md;
```

- Utilizamos a função `cin` para ler os valores de hi, mi, hf e mf a partir da entrada padrão.

```cpp
cin >> hi >> mi >> hf >> mf;
```

- Agora, vamos calcular a duração dos minutos (md) com base nas horas de início e fim:

```cpp
if (mf >= mi) {
    md = mf - mi;
} else {
    md = (60 - mi) + mf;
    hf -= 1;
}
```

Neste trecho, verificamos se os minutos de fim (mf) são maiores ou iguais aos minutos de início (mi). Se forem, a duração dos minutos é simplesmente a diferença entre mf e mi. Caso contrário, precisamos considerar que os minutos de fim envolvem uma rolagem de hora (de 59 para 0). Portanto, subtraímos os minutos de início (mi) de 60 e adicionamos os minutos de fim (mf).

- A seguir, calculamos a duração das horas (hd) com base nas horas de início e fim:

```cpp
if (hf > hi) {
    hd = hf - hi;
} else if (hf == hi && md == 0) {
    hd = 24;
} else if (hf == hi && md > 0) {
    hd = 0;
} else {
    hd = (24 - hi) + hf;
}
```

Neste trecho, verificamos várias condições para determinar a duração das horas. Se a hora de fim (hf) for maior do que a hora de início (hi), a duração é a diferença entre hf e hi. As outras condições tratam de situações em que as horas podem envolver uma rolagem de dia.

- Por fim, exibimos a saída formatada que mostra a duração do jogo em horas e minutos:

```cpp
cout << "O JOGO DUROU " << hd << " HORA(S) E " << md << " MINUTO(S)" << endl;
```

A mensagem é exibida no formato desejado com as variáveis hd e md inseridas.