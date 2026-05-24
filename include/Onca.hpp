#ifndef ONCA_H
#define ONCA_H
   
#include "Inimigo.hpp"
#include "Jogador.hpp"

class Onca : public Inimigo{
    private:
        int velocidade;

    public:
        Onca(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, int velocidade);
        ~Onca();
        void atacar(Jogador &jogador) override;
        void mover();
};

#endif
