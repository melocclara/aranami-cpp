#include "Pipa.hpp"

Pipa::Pipa(float pos_x, float pos_y) : Coletavel(pos_x, pos_y, "pipa") {};

Pipa::~Pipa() {};

void Pipa::aplicarEfeito(Jogador& jogador) {
    // habilitar pulo duplo aqui quando Jogador tiver um método público para isso
};
