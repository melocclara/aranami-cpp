#include "../Inimigos/Tucano.hpp"
#include "../Projeteis/TiroTucano.hpp"
#include <cmath>

Tucano::Tucano(double pos_x, double pos_y) : Inimigo("Tucano", 100, 50, pos_x, pos_y, 3) {};
Tucano::~Tucano() {};

void Tucano::atacar(Jogador& jogador, std::vector<Projetil*>& balas) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia < 800 && cooldown_ataque == 0) {
        balas.push_back(new TiroTucano(pos_x, pos_y));
        cooldown_ataque = 2;
    }
};
