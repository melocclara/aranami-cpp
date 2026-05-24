#ifndef ONCA_H
#define ONCA_H
   
#include "Inimigo.hpp"
#include "Jogador.hpp"

class Onca : public Inimigo{
    private:
        int velocidade;

    public:
        Onca(double pos_x, double pos_y);
        ~Onca();
        void atacar(Jogador &jogador, std::vector<Projetil*>& balas) override;
        void mover();
};

#endif
