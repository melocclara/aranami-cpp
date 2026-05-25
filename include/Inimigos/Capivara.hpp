#ifndef CAPIVARA_H
#define CAPIVARA_H

#include "Inimigo.hpp"

class Capivara : public Inimigo {
    public:
        Capivara(double pos_x, double pos_y);
        ~Capivara();
        void atacar(Jogador &jogador) override;
};

#endif
