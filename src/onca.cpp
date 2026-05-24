#include "Onca.hpp" 
#include <cmath>

Onca::Onca(std::string n, double v, double d, double x, double y, int cd, int vel): Inimigo(n, v, d, x, y, cd), velocidade(vel) {}

Onca::~Onca() {} 


//implementação do movimento
void Onca::mover() {
    posicao_x += velocidade;
}


//implementação do ataque
void Onca::atacar(Jogador& jogador) {

    float distancia = std::abs(jogador.getPosX() - posicao_x);

    if(distancia <= 50 && cooldown_ataque == 0) {

        jogador.receberDano(dano);

        cooldown_ataque = 3;
    }
}