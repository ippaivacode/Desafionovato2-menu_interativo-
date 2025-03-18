# Super Trunfo de Cartas

Este programa é um jogo baseado no conceito de Super Trunfo, onde duas cartas de cidades são comparadas com base em atributos como população, área, PIB per capita, entre outros.

```

## Como Jogar

1. O programa solicitará que o usuário cadastre duas cartas, informando os seguintes dados para cada cidade:
   - Letra do Estado (A-H)
   - Código da Carta (até 3 caracteres)
   - Nome da Cidade
   - População (número inteiro)
   - Área da Cidade (em km²)
   - PIB da Cidade (em bilhões de reais)
   - Número de pontos turísticos

2. Após o cadastro das duas cartas, o programa exibirá os dados das cidades cadastradas.

3. O usuário deverá escolher um dos atributos disponíveis para a comparação:
   - **1**: População
   - **2**: Área
   - **3**: Pontos turísticos
   - **4**: PIB per Capita
   - **5**: Densidade populacional

4. O programa comparará os valores do atributo escolhido e indicará qual cidade venceu na comparação.

## Exemplo de Uso

### Entrada do Usuário:
```
Digite a letra do estado (A-H):
A
Digite o Código da Carta (até 3 caracteres):
A01
Digite o Nome da Cidade:
Cidade Alfa
Digite a população da cidade (somente números inteiros):
1000000
Digite a área da cidade em km²:
500.5
Digite o PIB (em bilhões de reais):
50.2
Digite o número de pontos turísticos:
10
------------------------------------------------------
Digite a letra do estado (A-H):
B
Digite o Código da Carta (até 3 caracteres):
B02
Digite o Nome da Cidade:
Cidade Beta
Digite a população da cidade (somente números inteiros):
800000
Digite a área da cidade em km²:
600.2
Digite o PIB (em bilhões de reais):
45.8
Digite o número de pontos turísticos:
15
------------------------------------------------------
Escolha um atributo para comparar:
1. População
2. Área
3. Pontos turísticos
4. PIB per Capta
5. Densidade populacional

### Saída Esperada:
Escolha: 5
Você escolheu o atributo 'Densidade populacional' 
Carta 1- Cidade alpha : 2
Carta 2- Cidade Beta : 1
Resultado: Carta 2 Cidade Beta venceu!
```



## Observações
- O programa realiza cálculos adicionais como PIB per capita e densidade populacional automaticamente.
- Caso o usuário insira uma opção inválida no menu de comparação, o programa informará o erro.

Divirta-se jogando Super Trunfo de Cartas!

