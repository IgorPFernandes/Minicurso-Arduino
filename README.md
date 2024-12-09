# Bem vindo ao repositorio do meu minicurso de introdução a arduino!!

    Este minicurso tem como objetivo ensinar os conceitos básicos sobre o microcontrolador ATmega,
    com foco no Arduino Uno. O conteúdo aborda apenas o essencial da eletrônica aplicada às práticas e como 
    operar o microcontrolador.

## Mini-Curso Introdução a Arduino

    Ministrado na Universidade Federal Rural do Semi-árido (UFERSA)

    Ministrante e aluno de graduação: Igor Pereira Fernandes.

    Curso: Bacharelado em Técnologia da Informação.

    Evento: V Encontro de Computação do Oeste Potiguar (ECOP)

## Microcontroladores

    Antes de falar sobre programar em arduino é imperativo entender melhor sobre a ferramenta que vamos
    utilizar, os microcontroladores são como pequenos computadores em um circuito integrado (CI) de
    baixo custo, a qual contém o necessário para que possa ser manuseado:

* Núcleo de Processamento
* Memória ROM/RAM/FLASH
* Periféricos E/S
* Conversores de Sinais
* Gerador de Clock, entre outros.
<br>

## Microcontrolador X Microprocessador

    Algumas pessoas confundem a diferença entre microcontrolador e microprocessador, os microprocessadores necessitam
    de periféricos para seu funcionamento, ser integrado a memorias, interface de comunicação e outros itens, enquanto
    os microcontroladores já possuem tudo isso integrado em um mesmo circuito como já foi citado.

## Vantagens de usar um Microcontrolador
    * Custos baixos de projeto e construção
    * Consumo de energia mínimo
    * Facilidade de programação (Alto Nível)
    * Sistema compacto (“all in one”)
    * Praticidade para reposição
## Plataforma Arduino
    Arduino é uma plataforma de prototipagem eletrônica de hardware livre e de placa única, projetada com um 
    microcontrolador Atmel AVR com suporte de entrada/saída embutido e uma linguagem de programação padrão.
    Essa plataforma, possibilita que projetos de hardware baseados em microcontroladores possam ser simplificados,
    oferecendo grande vantagens a estudantes, professores e desenvolvedores interessados em sistemas de hardware.
## Microcontrolador: Arduino Uno
    * Para ministrar esse minicurso iremos utilizar os Arduinos Uno disponibilizados pela UFERSA.
    * Conexões Básicas: Botão Reset, Portas e Alimentação da Placa.
    * Segue a foto do Pinout (Informações e caracteristicas de cada Pino)
    * Pino: Conexões de entrada ou saída do microcontrolador.
![Pinout Arduino Uno](https://linuxhint.com/wp-content/uploads/2022/05/Arduino-Uno-Pinout-Guide-2.png)

<br>

## Especificações Importantes sobre o Pinout
    * Conexões de no máximo 5v para não queimar o microcontrolador.
    * Pinos analogicos para uma maior variedade de dados, baseado na variação de tensão. (A1,A2,A3...)
    * Pinos digitais funcionam com sinal alto ou baixo (Ligado ou Desligado), ideais para dados booleanos. (D1,D2,D3...)
    * Botão e Pino de reset não limpam o código, apenas reiniciam o microcontrolador.
    * Alimentação pode ser feita via USB ou através da conexão DC Power.
    * Comunicação Serial efetuada pela conexão USB
    * GND significa Ground (Terra)
    * PWM significa Pulse With Modulation (Modulação por largura de pulso)
    * Crystal Oscillator significa Oscilador de Cristal, usado como clock na placa, afinal o microcontrolador
    já possui um clock, porém o cristal na placa tem uma maior variedade de frequência. 

<br>

OBS: O slide possui uma sequência de atividades práticas para treinar, caso tenha dúvida em algum comando basta acessar o link da documentação (<https://www.arduino.cc/reference/en/>), além disso todas as práticas estão feitas disponíveis no repositorio.
