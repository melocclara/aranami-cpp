#include "Projetil.hpp"

Projetil::Projetil(double pos_x, double pos_y, double vel_x, double vel_y, int dano) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->vel_x = vel_x;
    this->vel_y = vel_y;
    this->dano = dano;
    this->ativo = true;
}

Projetil::~Projetil() {}

int Projetil::getDano() const {
    return(dano);
}

double Projetil::getPosX() const {
    return(pos_x);
}

double Projetil::getPosY() const {
    return(pos_y);
}

bool Projetil::isAtivo() const {
    return(ativo);
}

void Projetil::desativar() {
    this->ativo = false;
}