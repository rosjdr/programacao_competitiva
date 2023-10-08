**Explicação do Código - Revisão de Contrato** 📝📄

Neste problema, você precisa corrigir números que foram digitados em uma máquina de datilografia com um dígito falho. O dígito falho não é impresso, e você deve determinar o valor numérico correto com base no número original e no dígito defeituoso.

**Lógica do Programa** 🤔

O programa começa incluindo a biblioteca `bits/stdc++.h` para acessar funcionalidades avançadas:

```cpp
#include "bits/stdc++.h"
using namespace std;
```

Em seguida, declaramos duas variáveis: `char d` para representar o dígito defeituoso e `string n` para representar o número original:

```cpp
char d;
string n;
```

Lemos o dígito defeituoso e o número original da entrada padrão:

```cpp
cin >> d;
cin >> n;
```

O programa entra em um loop `while` que continua até que `d` seja igual a `'0'` e `n` seja igual a `"0"`:

```cpp
while (d != '0' && n != "0") {
```

Dentro do loop, criamos uma nova string `nova` com o valor inicial "0":

```cpp
string nova = "0";
```

Iteramos pelos caracteres do número original `n`:

```cpp
for (int i = 0; i < n.length(); i++) {
    if (n[i] != d) {
        nova += n[i];
    }
}
```

Aqui, estamos verificando se cada dígito de `n` é igual ao dígito defeituoso `d`. Se não for igual, adicionamos esse dígito à nova string `nova`.

Em seguida, removemos os zeros à esquerda da string `nova`:

```cpp
while (nova.length() > 0 && nova[0] == '0') {
    nova = nova.substr(1);
}
```

Isso garante que não haja zeros à esquerda no número corrigido.

Agora, verificamos o comprimento da string `nova`:

```cpp
if (nova.length() == 0)
    cout << 0 << endl;
else
    cout << nova << endl;
```

Se `nova` estiver vazia, isso significa que o número original era composto apenas por dígitos defeituosos, então a saída é "0". Caso contrário, exibimos o valor numérico corrigido.

Por fim, lemos novamente o dígito defeituoso `d` e o número original `n` para o próximo caso de teste:

```cpp
cin >> d >> n;
```

O loop continuará até que `d` seja `'0'` e `n` seja `"0"`, e o programa terminará.

Em resumo, este programa lê um dígito defeituoso e um número original, corrige o número considerando o dígito defeituoso e exibe o valor numérico corrigido. O processo é repetido até que sejam fornecidos `'0'` e `"0"` como entrada. 🔢🔍👨‍💼