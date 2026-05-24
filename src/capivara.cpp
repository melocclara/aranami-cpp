#include "Capivara.hpp"
#include "Tiro.hpp"
#include <cmath>

Capivara::Capivara(double pos_x, double pos_y,  std::vector<Projetil*>& tiros) : Inimigo("Onca", 200, 50, pos_x, pos_y, 3), tiros(tiros) {};

Capivara::~Capivara() {};

void Capivara::atacar(Jogador& jogador) {
    double distancia = jogador.getPosX() - pos_x;

    if(std::abs(distancia) < 1000 && cooldown_ataque == 0) {
        int direcao = (distancia > 0) ? 1 : -1;
        tiros.push_back(new Tiro(pos_x, pos_y, direcao));
        cooldown_ataque = 100;
    }
};
