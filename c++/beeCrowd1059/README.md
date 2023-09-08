# Explicação do Código - Exibindo Números Pares de 1 a 100

Este programa em C++ tem a finalidade de exibir todos os números pares entre 1 e 100, de forma simples e direta.

## Lógica do Programa

O código utiliza um loop `for` para iterar de 2 a 100, de dois em dois, o que significa que ele vai percorrer apenas os números pares no intervalo desejado. Aqui está a linha de código que realiza essa tarefa:

```c++
for (int i = 2; i <= 100; i += 2)
```

- `int i = 2`: Inicializa uma variável `i` com o valor 2, o primeiro número par no intervalo.
- `i <= 100`: Define a condição para continuar o loop enquanto `i` for menor ou igual a 100.
- `i += 2`: Incrementa `i` em 2 a cada iteração, garantindo que somente números pares sejam considerados.

## Saída de Dados

Dentro do loop, o programa usa a função `printf` para exibir cada número par em uma linha:

```c++
printf("%d\n", i);
```

- `%d`: Formata a saída para exibir um número inteiro.
- `\n`: Insere uma quebra de linha após cada número, garantindo que eles sejam exibidos um abaixo do outro.

## Resultado

O resultado desse programa é a exibição de todos os números pares entre 1 e 100, com cada número em uma linha separada.

🔢✨👍