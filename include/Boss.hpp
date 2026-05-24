#ifndef BOSS_H
#define BOSS_H
   
#include "Inimigo.hpp"
#include "Jogador.hpp"

class Boss : public Inimigo{

    private:
    int velocidade;
    double alcance_ataque;


    public:
    Boss(std::string n, double v, double d, double x, double y, int cd, int vel, double al);
        ~Boss();
        void atacar(Jogador &jogador) override;
        void mover();

};


#endif