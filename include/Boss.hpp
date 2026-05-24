#ifndef BOSS_H
#define BOSS_H

#include "Inimigo.hpp"
#include "Jogador.hpp"

class Boss : public Inimigo{
    private:
        int velocidade;
        double alcance_ataque;

    public:
        Boss(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, int velocidade, double alcance_ataque);
        ~Boss();
        void atacar(Jogador &jogador, std::vector<Projetil*>& balas) override;
        void mover();
};

#endif
