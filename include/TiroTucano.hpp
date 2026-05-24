#ifndef TIROTUCANO_H
#define TIROTUCANO_H

#include "Projetil.hpp"

class TiroTucano : public Projetil {
    public:
        TiroTucano(float pos_x, float pos_y);
        ~TiroTucano();

        void update() override;
};

#endif