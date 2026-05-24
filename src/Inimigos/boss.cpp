#include "../Inimigos/Boss.hpp" 
#include <cmath>

Boss::Boss(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, int velocidade, double alcance_ataque): Inimigo(nome, vida, dano, pos_x, pos_y, cooldown_ataque), velocidade(velocidade), alcance_ataque(alcance_ataque) {}

Boss::~Boss() {} 

// implementação do movimento
void Boss::mover() {
    pos_x += velocidade;
}

// implementação do ataque
void Boss::atacar(Jogador& jogador, std::vector<Projetil*>& balas) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia <= alcance_ataque && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 4;
    }
}
