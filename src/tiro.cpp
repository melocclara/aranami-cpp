#include "Tiro.hpp"


Tiro::Tiro(double pos_x, double pos_y, int direcao) : Projetil(pos_x, pos_y, 10.0 * direcao, 0.0, 5) {
}

Tiro::~Tiro() {
}

void Tiro::ricochetear(double parede_esquerda, double parede_direita) {

    if (this->pos_x >= parede_direita) {
        this->pos_x = parede_direita; 
        this->vel_x = -this->vel_x;
    }

    else if (this->pos_x <= parede_esquerda) {
        this->pos_x = parede_esquerda;
        this->vel_x = -this->vel_x;    
    }
}

void Tiro::update() {
    this->vel_y -= 0.2; // obs: ajustar gravidade depois.
    
    this->pos_x += this->vel_x; 
    this->pos_y += this->vel_y; 

    ricochetear(0.0, 0.0); // ajustar limites na main

    if (this->pos_y <= 0.0) {
        this->pos_y = 0.0; 
        desativar();
    }
}

void Tiro::desativar() {
    Projetil::desativar();
    // lógica para virar coletável será implementada posteriormente.
}