#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>
#include "Jogador.hpp"

class Inimigo {
    protected:
        std::string nome;
        double vida;
        double dano; 
        double posicao_x; //posições para inimigos no mapa
        double posicao_y;
        int cooldown_ataque;
        

    public:
        Inimigo(std::string n, double v, double d, double x, double y, int cd);
        virtual ~Inimigo();

        //ações
        virtual void atacar(Jogador &jogador) =0; //método virtual puro, permite às classes filhas terem diferentes maneiras de atacar
        void receberDano(int qtd); 
        void atualizarCooldown();
        std::string getNome()const;
        double getVida() const;
        double getDano() const;
        double getPosicaoX() const;
        double getPosicaoY() const;
        int getCooldown() const;
};


#endif