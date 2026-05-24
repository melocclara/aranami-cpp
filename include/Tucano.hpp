#ifndef TUCANO_H
#define TUCANO_H

#include "Inimigo.hpp"
#include "Projetil.hpp"
#include <vector>

class Tucano : public Inimigo {
    private:
        std::vector<Projetil*>& tiros;
        
    public:
        Tucano(double pos_x, double pos_y, std::vector<Projetil*>& tiros);
        ~Tucano();
        void atacar(Jogador& jogador) override;
};

#endif
