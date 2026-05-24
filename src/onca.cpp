#include "Onca.hpp" 
#include <cmath>

Onca::Onca(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque, int velocidade): Inimigo(nome, vida, dano, pos_x, pos_y, cooldown_ataque), velocidade(velocidade) {}

Onca::~Onca() {} 

//implementação do movimento
void Onca::mover() {
    pos_x += velocidade;
}

// implementação do ataque
void Onca::atacar(Jogador& jogador) {
    double distancia = std::abs(jogador.getPosX() - pos_x);

    if(distancia <= 50 && cooldown_ataque == 0) {
        jogador.receberDano(dano);
        cooldown_ataque = 3;
    }
}