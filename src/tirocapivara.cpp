#include "TiroCapivara.hpp"
#include "Tela.hpp"

TiroCapivara::TiroCapivara(double pos_x, double pos_y, int direcao) 
    : Projetil(pos_x, pos_y, 8.0 * direcao, 0.0, 5) {
}

TiroCapivara::~TiroCapivara() {
}

void TiroCapivara::update() {
    this->pos_x += this->vel_x; 
    if (this->pos_x <= Tela::getLimiteEsquerdo() || this->pos_x >= Tela::getLimiteDireito()) {
        desativar(); 
    }
}