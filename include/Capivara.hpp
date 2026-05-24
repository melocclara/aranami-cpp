#ifndef CAPIVARA_H
#define CAPIVARA_H

#include "Inimigo.hpp"
#include "Projetil.hpp"
#include <vector>

class Capivara : public Inimigo {
    private:
        std::vector<Projetil*>& tiros;
    public:
        Capivara(double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, std::vector<Projetil*>& tiros);
        ~Capivara();
        void atacar(Jogador &jogador) override;
};

#endif
