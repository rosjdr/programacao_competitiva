# Cifra de César 🕵️‍♂️

A Cifra de César é um sistema de criptografia que foi utilizado por Júlio César para proteger informações. Nesse sistema, cada letra do texto original é substituída pela letra que está um número fixo de posições à frente no alfabeto. Neste problema, você precisa decodificar mensagens que foram criptografadas com uma variação da Cifra de César.

## Lógica do Programa 💡

**Trecho do Código:**
```cpp
#include "bits/stdc++.h"
using namespace std;
int main(){
    string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string frase;
        string traducao = "";
        int chave;
        cin >> frase;
        cin >> chave;
        for(int i=0;i<frase.length();i++){
            int caractere = frase[i];
            if(caractere-chave < 65){
                traducao+=(91-chave)+caractere-65;
            } else {
                traducao+=(caractere-chave);
            }
        }
        cout << traducao << endl;
    }
}
```

**Passo a Passo da Lógica:**

1. O programa inicia incluindo as bibliotecas necessárias e definindo o espaço de nomes.

2. Cria-se a string `letras` que contém o alfabeto em maiúsculas. Isso será usado para mapear a letra criptografada de volta para a letra original.

3. Lê-se um número inteiro `n` que indica a quantidade de casos de teste.

4. Inicia-se um loop que irá processar cada caso de teste. Para cada caso, lê-se a frase criptografada `frase` e o valor da chave de deslocamento `chave`.

5. Inicializa-se a string `traducao` para armazenar a frase decodificada.

6. Para cada caractere na frase criptografada, faz-se o seguinte:
    - Calcula-se o valor ASCII do caractere.
    - Verifica-se se a subtração da chave desloca o caractere para uma posição antes de 'A' (valor ASCII 65). Se isso acontecer, é necessário ajustar o caractere para que ele circule de volta ao final do alfabeto. Isso é feito subtraindo o valor ASCII da chave e somando 26 (o número de letras no alfabeto).
    - Caso contrário, subtrai-se apenas a chave do valor ASCII do caractere.
    - O caractere resultante é adicionado à string `traducao`.

7. A frase decodificada é impressa.

Este código decodifica frases criptografadas usando a Cifra de César com deslocamento variável e retorna o texto original.

🔍🔒🔓🔤🧩

**Observação:** O problema foi resolvido com sucesso! Se desejar, posso auxiliá-lo em outro problema. 😊