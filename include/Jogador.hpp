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

        double pos_x, pos_y; 
        double vel_x, vel_y;  
        int direcao; 

        int invencib_timer;
        int tiro_cooldown; 
        bool pulo_duplo; 

        std::map<std::string, int> inventario; 

    public:
        Jogador(int max_vida = 10, double pos_x = 5, double pos_y = 0, double vel_x = 1, double vel_y = 2); 
        void mover(int direcao);
        bool noAr() const;
        void pular();

        void receberDano(int dano);
        void recuperarVida(int hp);
        void atirar(std::vector<Projetil*>& balas);
        bool inline isVivo() const { return (vida > 0); };
        void adicionarItem(std::string item, int quantidade);
        int inline getItem(std::string item) const { return (inventario.at(item)); };
        void update();

        int inline getDirecao() const { return (this->direcao); };
        double inline getPosX() const { return (this->pos_x); };
        double inline getPosY() const { return (this->pos_y); };

        friend std::ostream& operator<<(std::ostream& os, const Jogador& j);
};

#endif
