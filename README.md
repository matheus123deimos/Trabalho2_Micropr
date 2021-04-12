# Introdução

O nosso trabalho é inspirado no constante uso de teclados, não necessariamente matriciais, conectados a Displays LCDs, dentro do contexto dos eletrodomésticos que trabalham com aquecimento. O nosso código trabalha com o conceito de máquina de estados, onde cada estado chamamos de página, nesse caso foram usadas 2 Páginas:

* **Página 1:** Nessa página temos o Teclado Matricial conectado ao microcontrolador STM32F103C6, além disso também é possível ver o Display de LCD conectado a esse
microcontrolador. Nesse estado é feita uma busca no teclado pelos valores que irão compor a temperatura máxima do forno. Ovalor desejado é mostrado na tela do display de LCD
, no qual foi utilizado um driver genérico encontrado na internet. No código, existe uma parte que verifica quantos dígitos estão sendo utilizados, e retringi para cinco: 
dois inteiros, um ponto, e dois decimais. Para fazer o uso "." é utilizado o sinal de divisão do teclado matricial. Já para mudar para a página 2, o sinal de "=" é utlizado.

* **Página 2:** Na página 2, a temperatura máxima escolhida é mostrada da seguinte forma - "Temp Esc: xx.xx" no Display de LCD. Esse é o estado para o funcionamento do forno,
nele somente dois pinos são conectados ao microcontrolador, um de entrada e o outro de saída, o de saída serve para desligar o forno caso ele atinja a temperatura 
mostrada no display, já o pino de entrada serve para verificar a que temperatura o o forno se encontra.

A figura abaixo eexpressa o texto acima de forma visual:

![Esquema do Projeto](https://github.com/matheus123deimos/Trabalho2_Micropr/blob/main/Projeto%20Micro.png)

# Objetivos

* Construir uma interface Teclado/Display onde é possível processar de froma correta, via microcontrolador, o que se deseja com o teclado, além de ser possível compreender o que o microcontrolador está recebendo com display.
* Repassar com o uso do teclado matricial a temperetura máxima que um forno pode operar, e reallizar a simulação do seu funcionamento.

# Resultados 

![Esquema do Projeto](https://github.com/matheus123deimos/Trabalho2_Micropr/blob/main/sch/ProjetoFinal.jpg)

Na imagem acima o Pino 15 controla o funcionamento da chave do relé, quando a temperatura máxima que o display mostra for atingida, o microcontrolador mandará um sinal para este Pino 15, que fará com que o relé dispare a chave desligando o forno. Mas como o STM32F103C6 sabe qual é a temperatura do Forno? Ele possui um conversdo Analógico Digital (ADC) e faz o uso driver HAL_ADC, isso significa que ele converte a tensão mostrada no voltímetro em temperatura. O Microcontrolador faz essa leitura no Pino 0, ou seja, o Pino 0 é conectado no dividor de tensão.

# Conclusões
