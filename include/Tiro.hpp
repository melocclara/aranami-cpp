#ifndef TIRO_H
#define TIRO_H

#include "Projetil.hpp"

class Tiro : public Projetil {
    protected:
        void ricochetear(double parede_esquerda, double parede_direita); // verificar se o tiro bateu na parede e ricochetear
    public:
        Tiro(double pos_x, double pos_y, int direcao);
        ~Tiro();

        void update() override;
        void desativar() override;
};

#endif
