#include "Inimigos/Boss.hpp"
#include "Jogador.hpp"
#include <cmath>

Boss::Boss(double pos_x, double pos_y): Inimigo("Boss", 12, 1, pos_x, pos_y, 0), velocidade(velocidade), alcance_ataque(alcance_ataque) {}

Boss::~Boss() {} 

// implementação do movimento
void Boss::mover() {
    pos_x += velocidade;
}

// implementação do ataque
void Boss::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);
    if(distancia <= alcance_ataque && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 4;
    }
}
