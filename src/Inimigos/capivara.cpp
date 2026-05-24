#include "Inimigos/Capivara.hpp"
#include "Projeteis/TiroCapivara.hpp"
#include <cmath>

Capivara::Capivara(double pos_x, double pos_y) : Inimigo("Capivara", 100, 50, pos_x, pos_y, 5) {};

Capivara::~Capivara() {};

void Capivara::atacar(Jogador& jogador, std::vector<Projetil*>& balas) {
    double distancia = jogador.getPosX() - pos_x;

    if(std::abs(distancia) < 10 && cooldown_ataque == 0) {
        int direcao = (distancia > 0) ? 1 : -1;
        
        balas.push_back(new TiroCapivara(pos_x, pos_y, direcao));
        cooldown_ataque = 2;
    }
};
