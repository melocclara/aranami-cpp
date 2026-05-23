#include "Onca.hpp" 

Onca::Onca(std::string n, double v, double d, double x, double y, int vel): Inimigo(n, v, d, x, y), velocidade(vel) {}

Onca::~Onca() {} 

//implementação do ataque
void Onca::atacar(Jogador& jogador) { 
    jogador.receberDano(dano); 
}

//implementação do movimento
void Onca::mover() {
    posicao_x += velocidade;
}