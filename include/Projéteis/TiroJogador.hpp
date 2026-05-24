#ifndef TIROJOGADOR_H
#define TIROJOGADOR_H

#include "Projetil.hpp"
#include "Tela.hpp"

class TiroJogador : public Projetil {
    protected:
        void ricochetear(double parede_esquerda, double parede_direita); // verificar se o tiro bateu na parede e ricochetear
    public:
        TiroJogador(double pos_x, double pos_y, int direcao);
        ~TiroJogador();

        void update() override;
        void desativar() override;
};

#endif
