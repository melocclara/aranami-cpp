#include "Boss.hpp" 
#include <cmath>

Boss::Boss(std::string n, double v, double d, double x, double y, int cd, int vel, double al): Inimigo(n, v, d, x, y, cd), velocidade(vel), alcance_ataque(al) {}

Boss::~Boss() {} 

//implementação do movimento
void Boss::mover() {
    posicao_x += velocidade;
}

//implementação do ataque
void Boss::atacar(Jogador& jogador) {

    float distancia = std::abs(jogador.getPosX() - posicao_x);

    if(distancia <= alcance_ataque && cooldown_ataque == 0) {

        jogador.receberDano(dano);

        cooldown_ataque = 4;
    }
}