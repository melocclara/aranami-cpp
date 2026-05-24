#ifndef PIPA_H
#define PIPA_H

#include "Coletavel.hpp"

class Pipa : public Coletavel {
    public:
        Pipa(double pos_x, double pos_y);
        ~Pipa();
        void aplicarEfeito(Jogador& jogador) override;
};

#endif
