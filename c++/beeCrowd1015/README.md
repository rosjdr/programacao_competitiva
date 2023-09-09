## Explicação do Código - Cálculo da Distância entre Pontos 📏

Este programa em C++ tem como objetivo calcular a distância entre dois pontos no plano, dados suas coordenadas (x1, y1) e (x2, y2), usando a fórmula da distância euclidiana.

### Lógica do Programa

O código começa declarando quatro variáveis de ponto flutuante: `x1`, `y1`, `x2` e `y2`, que representam as coordenadas dos dois pontos.

```cpp
double x1, y1, x2, y2;
```

Em seguida, o programa lê os valores das coordenadas dos dois pontos a partir da entrada padrão.

```cpp
cin >> x1 >> y1 >> x2 >> y2;
```

Para calcular a distância entre esses dois pontos, o programa utiliza a fórmula da distância euclidiana:

```markdown
Distancia = sqrt((x2 - x1)^2 + (y2 - y1)^2)
```

Essa fórmula calcula a raiz quadrada da soma dos quadrados das diferenças entre as coordenadas x e y dos dois pontos.

```cpp
printf("%.4lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
```

O código acima calcula a distância entre os dois pontos e imprime o resultado com 4 casas decimais após o ponto decimal.

### Resultado

O programa fornece a distância entre os dois pontos especificados no plano, com 4 casas decimais de precisão.

📏🔢