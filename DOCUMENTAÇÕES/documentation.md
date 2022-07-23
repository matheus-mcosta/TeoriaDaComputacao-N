# Documentação
## Operações implementadas
---
### `mov_d(A, B)`

- A = B

Transfere o valor de B para A, zerando o registrador B

### `mov(A, B, C)`

- A = B (usando C)

Transfere o valor de B para A, preservando o registrador B

### `sum(A, B, C)`

- A = A + B (usando C)

Realiza a soma de A com B, preservando o valor de B e sobreescrevendo a soma em A

### `sub(A, B, C)`

- A = A - B (usando C)

Realiza a subtração de A com B, preservando o valor de B e sobreescrevendo a diferença em A

### `clr(A)`

- A = 0

Limpa o registrador A

### `mul(A, B, C, D)`

- `A = A * B` (usando C e D)

Realiza a multiplicação de A por B, armazenando o resultado em A e preservando B

### `mul2(A, B)`

- A = 2 * A 

Duplica o valor em A

### `exp2(A, B, C)`

- A = 2^A (usando B e C)

Realiza a exponenciação de 2 usando como potência o valor em A

### `exp2_(A, B, C, D)`

- B = 2^A (usando C e D)

Realiza a exponenciação de 2 usando como potência o valor em A e armazena a saída em B, preservando o valor de A

### `div2(A, C)`

- A = A/2 (usando C)

Realiza a divisão inteira de A por 2, armazenando o valor em A

## testes implementados
---
### `less(A, B, C)`
- A < B (usando C)

Verifica se A é menor do que B

### `divBy2(A, C)`

- A % 2 (usando C)

Verifica se o valor em A é divisível por 2

### `both_zero(A, B)`

- A == 0 && B == 0

verifica se os valores de A e B são simultaneamente zero

## Codificação e decodificação de pares ordenados

Para realizar a entrada de dois valores no lugar de um único número natural, é necessário codificar os dois números, $A$ e $B$ para que sejam representados em um único número $N$. A codificação utilizada é a seguinte:

$$ N = 2^{A}\cdot(2B+1)$$

## Operações de codificação e decodificação
 ---
## Codificação

### `cod(A, B, C, D, E, F)`

- C = cod(A, B)
- $ C = 2^{A}\cdot(2B+1)$

Codifica o par ordenado $(A, B)$ e armazena a codificação em C

## Decodificação

### `decod(A, B, C, D, E)`

- B, C = decod(A)

Decodifica A, colocando os valores no par ordenado $(B, C)$