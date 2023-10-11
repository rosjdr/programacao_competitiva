**Explicação do Código - Senha Fixa** 🔐

Neste problema, o objetivo é criar um programa que aceita repetidas tentativas de senha até que a senha correta seja informada. Quando a senha incorreta é fornecida, o programa deve imprimir "Senha Invalida". Quando a senha correta (2002) é fornecida, o programa deve imprimir "Acesso Permitido" e encerrar.

**Lógica do Programa** 🤔

O programa começa declarando uma variável inteira `senha` para armazenar a senha fornecida:

```cpp
int senha;
```

Em seguida, entra em um loop `while` que continuará até que uma senha correta seja fornecida. O programa lê um valor inteiro para `senha` a partir da entrada padrão (teclado) na primeira iteração do loop:

```cpp
while (cin >> senha) {
```

Dentro do loop, o programa verifica se a senha fornecida é igual a 2002 (a senha correta). Se for igual, o programa imprime "Acesso Permitido" e sai do loop usando `break`:

```cpp
if (senha == 2002) {
    cout << "Acesso Permitido" << endl;
    break;
}
```

Se a senha fornecida for diferente de 2002, o programa imprime "Senha Invalida":

```cpp
else {
    cout << "Senha Invalida" << endl;
}
```

O programa continua no loop, permitindo que o usuário insira outra senha.

Em resumo, este programa lê senhas até que a senha correta (2002) seja fornecida, imprimindo mensagens apropriadas ao longo do processo. 🔐✅🚫