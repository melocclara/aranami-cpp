#include "Inimigos/Tucano.hpp"
#include "Jogador.hpp"
#include <cmath>

Tucano::Tucano(double pos_x, double pos_y) : Inimigo("Tucano", 100, 50, pos_x, pos_y, 3) {};
Tucano::~Tucano() {};

void Tucano::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosY() - pos_y);

    if(distancia < 8 && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 2;
    }
};
