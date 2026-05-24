#ifndef PEDRA_H
#define PEDRA_H

#include "Coletavel.hpp"

class Pedra : public Coletavel {
    public:
        Pedra(double pos_x, double pos_y);
        ~Pedra();
        void aplicarEfeito(Jogador& jogador) override;
};

#endif