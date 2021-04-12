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

# Objetivos

# Resultados 

# Conclusões
