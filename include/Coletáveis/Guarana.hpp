#ifndef GUARANA_H
#define GUARANA_H

#include "Coletavel.hpp"
#include "Jogador.hpp"

class Guarana : public Coletavel {
    public:
        Guarana(double pos_x, double pos_y);
        ~Guarana();
        void aplicarEfeito(Jogador& jogador) override;
};

#endif
