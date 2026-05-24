#include "TiroCapivara.hpp"

TiroCapivara::TiroCapivara(double pos_x, double pos_y, int direcao) 
    : Projetil(pos_x, pos_y, 8.0 * direcao, 0.0, 5) {
}

TiroCapivara::~TiroCapivara() {
}

void TiroCapivara::update() {
    this->pos_x += this->vel_x; 
    double limite_esquerdo = 0; 
    double limite_direito = 0;
    if (this->pos_x <= limite_esquerdo || this->pos_x >= limite_direito) {
        desativar(); 
    }
}