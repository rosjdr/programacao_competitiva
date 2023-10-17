# Cálculo de Salário com Bônus 💰

Neste problema, o objetivo é calcular o salário total de um vendedor com base em seu salário fixo e no total de vendas efetuadas, considerando uma comissão de 15% sobre as vendas.

### Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    string nome;
    double salario, total;
    cin >> nome;
    cin >> salario >> total;
    printf("TOTAL = R$ %.2lf\n", salario+(total*0.15));
}
```

**Passo a Passo da Lógica:**

1. O programa inclui as bibliotecas necessárias e define o espaço de nomes.

2. São declaradas as variáveis `nome` (nome do vendedor), `salario` (salário fixo) e `total` (montante total de vendas).

3. O programa lê o nome do vendedor, o salário fixo e o total de vendas efetuadas pelo vendedor.

4. Para calcular o salário total, o programa utiliza a fórmula: `salario + (total * 0.15)`, onde 0.15 representa a comissão de 15% sobre as vendas.

5. O resultado é impresso no formato desejado, utilizando `printf` para formatar o valor com duas casas decimais e uma mensagem indicando "TOTAL = R$".

O código é simples e direto, realizando o cálculo do salário total considerando a comissão e imprimindo o resultado formatado. 💼💸📊