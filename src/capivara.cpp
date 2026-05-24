#include "Capivara.hpp"
#include "TiroCapivara.hpp"
#include <cmath>

Capivara::Capivara(double pos_x, double pos_y,  std::vector<Projetil*>& tiros) : Inimigo("Capivara", 100, 50, pos_x, pos_y, 5), tiros(tiros) {};

Capivara::~Capivara() {};

void Capivara::atacar(Jogador& jogador) {
    double distancia = jogador.getPosX() - pos_x;

    if(std::abs(distancia) < 10 && cooldown_ataque == 0) {
        int direcao = (distancia > 0) ? 1 : -1;
        tiros.push_back(new TiroCapivara(pos_x, pos_y, direcao));
        cooldown_ataque = 5;
    }
};
