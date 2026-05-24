#include "Tucano.hpp"
#include "TiroTucano.hpp"
#include <cmath>

Tucano::Tucano(double pos_x, double pos_y, std::vector<Projetil*>& tiros) : Inimigo("Tucano", 100, 50, pos_x, pos_y, 3), tiros(tiros) {};

Tucano::~Tucano() {};

void Tucano::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia < 800 && cooldown_ataque == 0) {
        tiros.push_back(new TiroTucano(pos_x, pos_y));
        cooldown_ataque = 50;
    }
};
