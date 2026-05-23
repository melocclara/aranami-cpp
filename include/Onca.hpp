#ifndef ONCA_H
#define ONCA_H
   
#include "Inimigo.hpp"
#include "Jogador.hpp"

class Onca : public Inimigo{
    private:
        int velocidade;

    public:
        Onca(std::string n, double v, double d, double x, double y, int vel):Inimigo(n, v, d, x, y), velocidade(vel){}//chama construtor da mãe
        ~Onca();
        void atacar(Jogador &jogador) override;
        void mover();

};

#endif