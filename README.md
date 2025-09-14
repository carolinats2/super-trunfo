Este projeto é uma implementação do jogo **Super Trunfo** em linguagem C.  
Ele foi desenvolvido como parte de um desafio acadêmico pelo Professor Sérgio Cardoso para praticar conceitos, como o **uso de estruturas condicionais (if / else)**.

Funcionalidades
- Cadastro de **duas cartas** com os seguintes atributos:
  - Estado
  - Código da carta
  - Nome da cidade
  - População
  - Área
  - PIB
  - Número de pontos turísticos

Cálculos:
  - **Densidade populacional** = População / Área
  - **PIB per capita** = PIB / População
- Comparação de cartas usando **um único atributo numérico**:
  - População
  - Área
  - PIB
  - Densidade populacional (menor vence)
  - PIB per capita
- Exibição clara do resultado da comparação.

## ⚙️ Como usar
#1. Compilar o programa
No terminal, use o comando:

gcc -o super_trunfo super_trunfo.c 

Após compilar, execute com:

./super_trunfo

O programa exibirá as duas cartas, os cálculos de densidade e PIB per capita, ao serem comparados, mostrará qual carta venceu na comparação.

gcc -o super_trunfo super_trunfo.c
