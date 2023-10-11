**Explicação do Código - Quadrante** 📊

Neste problema, o objetivo é determinar em qual quadrante do sistema cartesiano um ponto dado pertence. O programa continuará lendo pontos até que pelo menos uma de suas coordenadas seja nula (0), caso em que o programa será encerrado.

**Lógica do Programa** 🧠

O programa começa declarando duas variáveis inteiras, `x` e `y`, para armazenar as coordenadas X e Y do ponto:

```cpp
int x, y;
```

Em seguida, ele lê os valores de `x` e `y` a partir da entrada padrão (teclado) na primeira iteração do loop `while`:

```cpp
cin >> x >> y;
```

O programa entra em um loop `while` que continuará até que pelo menos uma das coordenadas seja nula (ou seja, `x` ou `y` igual a zero). A verificação é feita usando `x != 0 && y != 0`. Se pelo menos uma das coordenadas for nula, o loop é encerrado:

```cpp
while (x != 0 && y != 0) {
```

Dentro do loop, o programa verifica as coordenadas `x` e `y para determinar em qual quadrante do sistema cartesiano o ponto pertence. Ele usa quatro condicionais `if` para verificar os quatro quadrantes possíveis.

- Se `x` e `y` forem ambos positivos, o ponto pertence ao primeiro quadrante.
- Se `x` for negativo e `y` positivo, o ponto pertence ao segundo quadrante.
- Se `x` e `y` forem ambos negativos, o ponto pertence ao terceiro quadrante.
- Se `x` for positivo e `y` negativo, o ponto pertence ao quarto quadrante.

O programa imprime a mensagem correspondente ao quadrante no qual o ponto se encontra:

```cpp
if (x > 0 && y > 0) cout << "primeiro\n";
if (x < 0 && y > 0) cout << "segundo\n";
if (x < 0 && y < 0) cout << "terceiro\n";
if (x > 0 && y < 0) cout << "quarto\n";
```

Após imprimir o quadrante, o programa lê novos valores de `x` e `y` para continuar o processo. O loop continuará até que pelo menos uma das coordenadas seja zero, encerrando o programa.

Este programa é uma ótima demonstração de como usar condicionais `if` para tomar decisões com base nas coordenadas de um ponto no plano cartesiano e como usar um loop para processar múltiplos casos de teste. 📊🔄✅