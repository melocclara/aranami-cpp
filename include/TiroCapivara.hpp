#ifndef TIROCAPIVARA_H
#define TIROCAPIVARA_H

#include "Projetil.hpp"

class TiroCapivara : public Projetil {
    public:
        TiroCapivara(double pos_x, double pos_y, int direcao);
        ~TiroCapivara();

        void update() override;
};

#endif