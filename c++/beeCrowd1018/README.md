## Explicação do Código - Contagem de Notas 💵

Este programa em C++ tem como objetivo calcular o menor número de notas (cédulas) necessárias para representar um valor inteiro, seguindo as notas de 100, 50, 20, 10, 5, 2 e 1. Além disso, ele também imprime o valor lido e a relação de notas necessárias.

### Lógica do Programa

O código começa declarando variáveis necessárias, incluindo o valor inteiro `n` que representa o valor a ser decomposto, e variáveis para contar cada tipo de nota (nota100, nota50, etc.).

```cpp
int n, resto;
int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
```

Em seguida, o programa lê o valor `n` da entrada padrão.

```cpp
cin >> n;
```

O valor lido é impresso como parte da saída.

```cpp
cout << n << endl;
```

A partir do valor lido (`n`), o programa calcula a quantidade mínima de cada tipo de nota (cédula) necessária. Para isso, ele realiza divisões sucessivas e atualiza o valor do `resto` em cada etapa.

Por exemplo, para calcular a quantidade de notas de 100 necessárias, ele divide `n` por 100 e armazena o resultado em `nota100`. Em seguida, subtrai o valor total representado por essas notas (100 * `nota100`) do `n` inicial, obtendo o novo valor do `n`.

```cpp
nota100 = n / 100;
resto = n - (nota100 * 100);
```

Esse processo é repetido para cada tipo de nota (50, 20, 10, 5, 2 e 1).

```cpp
nota50 = resto / 50;
nota20 = resto / 20;
nota10 = resto / 10;
nota5 = resto / 5;
nota2 = resto / 2;
nota1 = resto / 1;
```

Por fim, o programa imprime a quantidade de cada tipo de nota e o valor da nota em reais (R$).

```cpp
cout << nota100 << " nota(s) de R$ 100,00" << endl;
cout << nota50 << " nota(s) de R$ 50,00" << endl;
cout << nota20 << " nota(s) de R$ 20,00" << endl;
cout << nota10 << " nota(s) de R$ 10,00" << endl;
cout << nota5 << " nota(s) de R$ 5,00" << endl;
cout << nota2 << " nota(s) de R$ 2,00" << endl;
cout << nota1 << " nota(s) de R$ 1,00" << endl;
```

### Resultado

O programa fornece a quantidade mínima de notas (cédulas) de cada tipo necessárias para representar o valor lido `n`, além de mostrar o valor lido como parte da saída.

💵🔢