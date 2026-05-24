#include "Capivara.hpp"
#include "Tiro.hpp"
#include <cmath>

Capivara::Capivara(double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, std::vector<Projetil*>& tiros) : Inimigo("capivara", vida, dano, pos_x, pos_y, cooldown_ataque), tiros(tiros) {};

Capivara::~Capivara() {};

void Capivara::atacar(Jogador& jogador) {
    double distancia = jogador.getPosX() - pos_x;

    if(std::abs(distancia) < 1000 && cooldown_ataque == 0) {
        int direcao = (distancia > 0) ? 1 : -1;
        tiros.push_back(new Tiro(pos_x, pos_y, direcao));
        cooldown_ataque = 100;
    }
};
