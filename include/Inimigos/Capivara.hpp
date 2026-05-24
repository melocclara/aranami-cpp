#ifndef CAPIVARA_H
#define CAPIVARA_H

#include "Inimigo.hpp"
#include "../Projeteis/Projetil.hpp"
#include <vector>

class Capivara : public Inimigo {
    public:
        Capivara(double pos_x, double pos_y);
        ~Capivara();
        void atacar(Jogador &jogador, std::vector<Projetil*>& balas) override;
};

#endif
