#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

class Projetil;

class Jogador{
    private:
        int vida; 
        int max_vida;

        float pos_x, pos_y; 
        float vel_x, vel_y;  
        int direcao; 

        int invencib_timer;
        int tiro_cooldown; 
        bool pulo_duplo; 

        std::map<std::string, int> inventario; 

    public:
        Jogador(int max_vida = 10, float pos_x = 5, float pos_y = 0, float vel_x = 1, float vel_y = 2); 
        void mover(int direcao);
        bool noAr() const;
        void pular();
        void ativarPuloDuplo();

        void receberDano(int dano);
        void recuperarVida(int hp);
        void atirar(std::vector<Projetil*>& balas);
        bool isVivo() const;
        void adicionarItem(std::string item, int quantidade);
        int getItem(std::string item) const;
        void update();

        int getDirecao() const;
        float getPosX() const;
        float getPosY() const;

        friend std::ostream& operator<<(std::ostream& os, const Jogador& j);
};

#endif