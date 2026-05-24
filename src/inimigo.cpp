#include "Inimigo.hpp"

int Inimigo::contador_inimigos = 0;

Inimigo::Inimigo(std::string nome, double vida, double dano, double pos_x, double pos_y, int cooldown_ataque): nome(nome), vida(vida), dano(dano), pos_x(pos_x), pos_y(pos_y), cooldown_ataque(cooldown_ataque) { contador_inimigos++; }

Inimigo::~Inimigo() { contador_inimigos--; }

// implementação do cooldown
void Inimigo::atualizarCooldown() {
    if(cooldown_ataque > 0) {
        cooldown_ataque--;
    }
}

// dano que o inimigo recebe do jogador
void Inimigo::receberDano(double qtd) {
    vida -= qtd;
    if(vida < 0) {
        vida = 0;
    }
}
