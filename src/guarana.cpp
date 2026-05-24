#include "Guarana.hpp"

Guarana::Guarana(float pos_x, float pos_y): Coletavel(pos_x, pos_y, "Guarana") {}
Guarana::~Guarana() {}

//efeito de recuperar vida
void Guarana::aplicarEfeito(Jogador& jogador) {
    jogador.adicionarItem("Guarana", 1);
    jogador.recuperarVida(1);
}