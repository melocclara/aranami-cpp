#ifndef TIROTUCANO_H
#define TIROTUCANO_H

#include "Projetil.hpp"

class TiroTucano : public Projetil {
    public:
        TiroTucano(double pos_x, double pos_y);
        ~TiroTucano();

        void update() override;
};

#endif