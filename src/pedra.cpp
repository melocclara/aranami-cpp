#include "Pedra.hpp"

Pedra::Pedra(float pos_x, float pos_y) : Coletavel(pos_x, pos_y, "pedra") {};

Pedra::~Pedra() {};

void Pedra::aplicarEfeito(Jogador& jogador) {
    jogador.adicionarItem("Pedra", 1); 
}
