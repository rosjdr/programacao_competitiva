# Explicação do Código - Alarme Despertador ⏰

Neste problema, o objetivo é calcular quantos minutos Daniela tem para dormir, considerando a hora atual e a hora programada no despertador.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main() {
    int hi, mi, hf, mf;
    int md, hd;

    while (cin >> hi >> mi >> hf >> mf) {
        if (hi == 0 && mi == 0 && hf == 0 && mf == 0)
            break;
        if (mf >= mi)
            md = mf - mi;
        else {
            md = (60 - mi) + mf;
            hf -= 1;
        }
        if (hf > hi)
            hd = hf - hi;
        else if (hf == hi && md == 0)
            hd = 24;
        else if (hf == hi && md > 0)
            hd = 0;
        else
            hd = (24 - hi) + hf;

        md += (hd * 60);
        cout << md << endl;
    }
}
```

**Passo a Passo da Lógica:**

1. O programa começa incluindo as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `hi` (hora inicial), `mi` (minuto inicial), `hf` (hora final) e `mf` (minuto final), que representam a hora atual e a hora do alarme do despertador.

3. O programa entra em um loop `while`, que continua enquanto há entrada disponível. A verificação é feita com `cin >> hi >> mi >> hf >> mf`.

4. Antes de realizar os cálculos, o programa verifica se todos os valores de entrada são iguais a zero, o que indicaria o final dos casos de teste. Se isso ocorrer, o loop é interrompido com `break`.

5. O programa então verifica se os minutos do alarme (`mf`) são maiores ou iguais aos minutos atuais (`mi`). Se sim, a diferença entre `mf` e `mi` é atribuída à variável `md`, que representa os minutos de sono. Caso contrário, significa que ocorreu uma mudança de hora, e a diferença deve ser calculada considerando que uma hora possui 60 minutos.

6. Para calcular as horas de sono, o programa verifica se as horas do alarme (`hf`) são maiores do que as horas atuais (`hi`). Se sim, a diferença entre `hf` e `hi` é atribuída à variável `hd`. Há também verificações adicionais: se as horas forem iguais e os minutos de sono forem zero, significa que o alarme foi programado para a mesma hora, e `hd` é definida como 24 (horas completas de um dia). Se as horas forem iguais, mas os minutos de sono forem maiores que zero, significa que o alarme foi programado para o mesmo horário, e `hd` é definida como zero.

7. Em seguida, o programa calcula os minutos totais de sono (`md`) adicionando os minutos de sono à quantidade de horas de sono em minutos (`hd * 60`).

8. Por fim, o programa imprime o valor de `md`, representando a quantidade de minutos que Daniela tem para dormir.

O código continua executando esse processo para cada caso de teste fornecido na entrada. É uma solução simples e eficaz para calcular o tempo de sono com base nas horas atuais e no horário do despertador. ⏰😴🇧🇷