#include "Pipa.hpp"

Pipa::Pipa(double pos_x, double pos_y) : Coletavel(pos_x, pos_y, "pipa") {};

Pipa::~Pipa() {};

void Pipa::aplicarEfeito(Jogador& jogador) {
    jogador.adicionarItem("pipa", 1);
};
