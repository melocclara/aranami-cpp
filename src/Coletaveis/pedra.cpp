#include "Coletaveis/Pedra.hpp"

Pedra::Pedra(double pos_x, double pos_y) : Coletavel(pos_x, pos_y, "pedra") {};

Pedra::~Pedra() {};

void Pedra::aplicarEfeito(Jogador& jogador) {
    jogador.adicionarItem("pedra", 1); 
}
