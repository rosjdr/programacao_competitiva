# Estatísticas do Grenal ⚽

Neste problema, você é contratado pela Federação Gaúcha de Futebol para escrever um programa que calcule estatísticas dos resultados de vários GRENAIS, o famoso clássico do futebol gaúcho. O programa deve ler o número de gols marcados pelo Internacional (Inter) e pelo Grêmio em um Grenal e, em seguida, perguntar se deseja realizar um novo Grenal ou encerrar. Ao final, o programa deve mostrar várias estatísticas, incluindo o número de vitórias de cada time e se houve um vencedor.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    int gi, gg, r;
    cin >> gi >> gg >> r;
    int total = 0;
    int vi = 0;
    int vg = 0;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    while(r != 2){
        if(gi > gg) vi++;
        else if(gg > gi) vg++;
        total++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> gi >> gg >> r;
    }
    if(gi > gg) vi++;
    else if(gg > gi) vg++;
    total++;
    cout << total << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << total - (vg + vi) << endl;
    if(vi > vg) cout << "Inter venceu mais" << endl;
    else if(vg > vi) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `gi` (gols do Inter), `gg` (gols do Grêmio) e `r` (resposta para realizar outro Grenal).

3. O programa lê os gols do Inter, gols do Grêmio e a resposta para realizar outro Grenal a partir da entrada padrão.

4. As variáveis `total`, `vi` (vitórias do Inter) e `vg` (vitórias do Grêmio) são inicializadas.

5. É impressa a mensagem "Novo grenal (1-sim 2-nao)" para solicitar a resposta.

6. O programa entra em um loop enquanto `r` for diferente de 2 (enquanto houver novos Grenais para avaliar).

7. Dentro do loop, o programa verifica qual time venceu ou se houve empate, atualizando as variáveis `vi` e `vg` conforme necessário.

8. A cada novo Grenal, `total` é incrementado e a resposta é solicitada novamente.

9. Após a saída do loop (quando `r` for igual a 2), o programa calcula o número de empates.

10. São impressas as estatísticas finais, incluindo o número de Grenais, vitórias de Inter, vitórias de Grêmio e se houve um vencedor.

O código é eficiente e direto, coletando os resultados dos Grenais e calculando as estatísticas desejadas. ⚽🏆🇧🇷