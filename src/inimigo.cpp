#include "Inimigo.hpp"


Inimigo::Inimigo(std::string n, double v, double d, double x, double y, int cd): nome(n), vida(v), dano(d), posicao_x(x), posicao_y(y), cooldown_ataque(cd) {contador_inimigos++;}
Inimigo::~Inimigo() {contador_inimigos--;}


// implementação do cooldown
void Inimigo::atualizarCooldown() {
    if(cooldown_ataque > 0) {
        cooldown_ataque--;
    }
}

//dano que o inimigo recebe do jogador
void Inimigo::receberDano(int qtd) {
    vida -= qtd;
    if(vida < 0) {
        vida = 0;
    }
}


std::string Inimigo::getNome() const {return nome;}

double Inimigo::getVida() const {return vida;}

double Inimigo::getDano() const { return dano;}

double Inimigo::getPosicaoX() const {return posicao_x;}

double Inimigo::getPosicaoY() const {return posicao_y;}

int Inimigo::getCooldown() const {return cooldown_ataque;}