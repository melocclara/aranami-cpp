#include "../Projeteis/Projetil.hpp"

Projetil::Projetil(double pos_x, double pos_y, double vel_x, double vel_y, int dano) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->vel_x = vel_x;
    this->vel_y = vel_y;
    this->dano = dano;
    this->ativo = true;
}

Projetil::~Projetil() {}

void Projetil::desativar() {
    this->ativo = false;
}
