#ifndef PIPA_H
#define PIPA_H

#include "Coletavel.hpp"

class Pipa : public Coletavel {
    public:
        Pipa(float pos_x, float pos_y);
        ~Pipa();
        void aplicarEfeito(Jogador& jogador) override;
};

#endif
