_O jogo retrata a história de Helicônia, uma guerreira indígena abençoada por Tupã para derrotar o domínio de Anhangá._

## Coletáveis

O jogo possui 3 coletáveis principais:

- **Pedra:** munição utilizada pelo jogador;
- **Pipa:** permite o pulo duplo;
- **Guaraná:** recupera a vida do jogador.

## Inimigos

Durante a aventura, o jogador enfrentará diferentes tipos de inimigos:

- **Capivara:** permanece estática, mas lança projéteis em direção ao jogador;
- **Onça:** realiza ataques rápidos e ferozes;
- **Tucano:** inimigo aéreo que dispara projéteis do alto;
- **Boss:** possui ataques pesados e constantes — ataque enquanto foge!

##Como Rodar o projeto
Clone o repositório:
```
git clone https://github.com/melocclara/aranami-cpp.git
cd aranami-cpp
```

Use o comando a seguir para compilar:
```
g++ main.cpp src/*.cpp src/Inimigos/*.cpp src/Coletaveis/*.cpp src/Projeteis/*.cpp -I include -o jogo 
```

Agora execute:
```
./jogo
```
