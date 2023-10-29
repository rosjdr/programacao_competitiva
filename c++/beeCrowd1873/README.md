# Pedra-Papel-Tesoura-Lagarto-Spock 🦎🖖

O jogo "Pedra-Papel-Tesoura-Lagarto-Spock" é uma variação do clássico jogo "Pedra-Papel-Tesoura", adicionando duas novas opções: "Lagarto" e "Spock." Cada opção vence ou perde contra outras opções de acordo com regras específicas. Neste problema, Rajesh e Sheldon estão jogando, e você precisa determinar quem ganhou ou se houve empate.

## Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s,r;
        cin >> r >> s;
        if(r==s) cout << "empate" << endl;
        else{
            if((r=="tesoura" && s=="papel")||
               (r=="papel"   && s=="pedra")||
               (r=="pedra"   && s=="lagarto")||
               (r=="lagarto" && s=="spock")||
               (r=="spock"   && s=="tesoura")||
               (r=="tesoura" && s=="lagarto")||
               (r=="lagarto" && s=="papel")||
               (r=="papel"   && s=="spock")||
               (r=="spock"   && s=="pedra")||
               (r=="pedra"   && s=="tesoura")
               ) cout << "rajesh" << endl;
            else if (  (s=="tesoura" && r=="papel")||
                       (s=="papel"   && r=="pedra")||
                       (s=="pedra"   && r=="lagarto")||
                       (s=="lagarto" && r=="spock")||
                       (s=="spock"   && r=="tesoura")||
                       (s=="tesoura" && r=="lagarto")||
                       (s=="lagarto" && r=="papel")||
                       (s=="papel"   && r=="spock")||
                       (s=="spock"   && r=="pedra")||
                       (s=="pedra"   && r=="tesoura")
                        ) cout << "sheldon" << endl;
        }
    }
}
```

**Passo a Passo da Lógica:**

1. O programa inicia incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Lê-se um número inteiro `n` que indica a quantidade de casos de teste.

3. Inicia-se um loop que irá processar cada caso de teste. Para cada caso, lê-se as escolhas de Rajesh (`r`) e Sheldon (`s`).

4. Verifica-se se as escolhas de Rajesh e Sheldon são iguais. Se forem iguais, imprime-se "empate."

5. Caso as escolhas sejam diferentes, verifica-se as combinações possíveis para determinar o vencedor. Existem cinco possíveis vitórias para cada jogador, e elas são verificadas com condicionais.

6. Se Rajesh vencer, imprime-se "rajesh." Se Sheldon vencer, imprime-se "sheldon."

Este código determina o vencedor do jogo "Pedra-Papel-Tesoura-Lagarto-Spock" com base nas escolhas de Rajesh e Sheldon ou indica um empate.

🤖🕹️✂️🧻🦎

**Observação:** O problema foi resolvido com sucesso! Se desejar, posso auxiliá-lo em outro problema. 😊