#ifndef TUCANO_H
#define TUCANO_H

#include "Inimigo.hpp"
#include "Projetil.hpp"
#include <vector>

class Tucano : public Inimigo {
    public:
        Tucano(double pos_x, double pos_y);
        ~Tucano();
        void atacar(Jogador& jogador, std::vector<Projetil*>& balas) override;
};

#endif
