#include "Inimigos/Onca.hpp"
#include "Jogador.hpp"
#include <cmath>

Onca::Onca(double pos_x, double pos_y): Inimigo("Onca", 200, 50, pos_x, pos_y, 3), velocidade(10) {}

Onca::~Onca() {} 

//implementação do movimento
void Onca::mover() {
    pos_x += velocidade;
}

// implementação do ataque
void Onca::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia <= 10 && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 1;
    }
}