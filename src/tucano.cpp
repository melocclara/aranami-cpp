#include "Tucano.hpp"
#include "Tiro.hpp"
#include <cmath>

Tucano::Tucano(double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, std::vector<Projetil*>& tiros) : Inimigo("tucano", vida, dano, pos_x, pos_y, cooldown_ataque), tiros(tiros) {};

Tucano::~Tucano() {};

void Tucano::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia < 800 && cooldown_ataque == 0) {
        tiros.push_back(new Tiro(pos_x, pos_y, 0));
        cooldown_ataque = 50;
    }
};
