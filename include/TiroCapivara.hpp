#ifndef TIROCAPIVARA_H
#define TIROCAPIVARA_H

#include "Projetil.hpp"

class TiroCapivara : public Projetil {
    public:
        TiroCapivara(float pos_x, float pos_y, int direcao);
        ~TiroCapivara();

        void update() override;
};

#endif