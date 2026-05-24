
#ifndef GUARANA_H
#define GUARANA_H

#include "Coletavel.hpp"
#include "Jogador.hpp"

class Guarana : public Coletavel {

    public:
        Guarana(float pos_x, float pos_y);
        ~Guarana();

        void aplicarEfeito(Jogador& jogador) override;
};

#endif