#include "TiroJogador.hpp"
#include "Pedra.hpp"


TiroJogador::TiroJogador(double pos_x, double pos_y, int direcao) : Projetil(pos_x, pos_y, 10.0 * direcao, 0.0, 5) {
}

TiroJogador::~TiroJogador() {
}

void TiroJogador::ricochetear(double parede_esquerda, double parede_direita) {

    if (this->pos_x >= parede_direita) {
        this->pos_x = parede_direita; 
        this->vel_x = -this->vel_x;
    }

    else if (this->pos_x <= parede_esquerda) {
        this->pos_x = parede_esquerda;
        this->vel_x = -this->vel_x;    
    }
}

void TiroJogador::update() {
    this->vel_y -= 0.2; // obs: ajustar gravidade depois.
    
    this->pos_x += this->vel_x; 
    this->pos_y += this->vel_y; 

    ricochetear(Tela::getLimiteEsquerdo(), Tela::getLimiteDireito());

    if (this->pos_y <= Tela::getChao()) {
        this->pos_y = Tela::getChao(); 
        desativar();
    }
}

void TiroJogador::desativar() {
    Projetil::desativar();
    new Pedra(this->pos_x, this->pos_y);  
}