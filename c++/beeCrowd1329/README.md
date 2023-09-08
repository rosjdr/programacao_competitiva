# Explicação do Código - Cara ou Coroa

Este programa em C++ tem como objetivo calcular o número de vezes que Maria e João ganharam o jogo de Cara ou Coroa ao longo dos anos com base em um registro de resultados. A entrada consiste em várias rodadas do jogo, onde 0 representa a vitória de Maria e 1 a vitória de João. O programa calcula o número de vitórias de cada um e exibe o resultado.

## Lógica do Programa

O código começa declarando quatro variáveis: `n` (número de jogos em uma rodada), `r` (resultado de cada jogo, 0 para Maria e 1 para João), `tm` (total de vitórias de Maria) e `tj` (total de vitórias de João).

```cpp
int n, r, tm, tj;
```

O programa entra em um loop while que executa até que `n` seja igual a 0, indicando o fim dos casos de teste.

```cpp
cin >> n;
while (n != 0) {
    tm = 0;
    tj = 0;
    for (int i = 0; i < n; i++) {
        cin >> r;
        r == 0 ? tm++ : tj++;
    }
    cout << "Mary won " << tm << " times and John won " << tj << " times" << endl;
    cin >> n;
}
```

Dentro do loop, o programa lê o número de jogos `n` e, em seguida, reinicia os contadores `tm` e `tj` para zero. Em seguida, ele entra em um segundo loop para ler os resultados de cada jogo. Se o resultado for 0, incrementa o contador de vitórias de Maria (`tm`); caso contrário, incrementa o contador de vitórias de João (`tj`).

Após a análise de todas as rodadas, o programa imprime o número de vitórias de Maria e João.

## Resultado

O programa calcula e exibe o número de vitórias de Maria e João com base nos resultados dos jogos fornecidos como entrada. Isso permite que eles acompanhem e comparem seu desempenho ao longo dos anos.

🎲🏆📊