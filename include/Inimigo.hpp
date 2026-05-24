#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>
#include "Jogador.hpp"

class Inimigo {
    protected:
        std::string nome;
        double vida;
        double dano; 
        double pos_x; // posições para inimigos no mapa
        double pos_y;
        int cooldown_ataque;
        static int contador_inimigos;

    public:
        Inimigo(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque);
        virtual ~Inimigo();
        // ações
        virtual void atacar(Jogador &jogador) = 0; // método virtual puro, permite às classes filhas terem diferentes maneiras de atacar
        void receberDano(int qtd); 
        void atualizarCooldown();
        std::string inline getNome() const { return nome; };
        double inline getVida() const { return vida; };
        double inline getDano() const { return dano; };
        double inline getPosX() const { return pos_x; };
        double inline getPosY() const { return pos_y; };
        int inline getCooldown() const { return cooldown_ataque; };
};

#endif
