#include "Projeteis/TiroTucano.hpp"
#include "Tela.hpp"

TiroTucano::TiroTucano(double pos_x, double pos_y) : Projetil(pos_x, pos_y, 0.0, -1.0, 1) {}

TiroTucano::~TiroTucano() {
}

void TiroTucano::update() {
    this->pos_y += this->vel_y; 

    if (this->pos_y <= Tela::getChao()) {
        this->pos_y = Tela::getChao();
        desativar();
    }
}