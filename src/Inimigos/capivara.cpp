#include "Inimigos/Capivara.hpp"
#include <cmath>

Capivara::Capivara(double pos_x, double pos_y) : Inimigo("Capivara", 2, 1, pos_x, pos_y, 0) {};

Capivara::~Capivara() {};

void Capivara::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(std::abs(distancia) <= 5 && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 2;
    }
};
