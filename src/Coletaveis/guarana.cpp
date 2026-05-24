#include "../Coletaveis/Guarana.hpp"

Guarana::Guarana(double pos_x, double pos_y): Coletavel(pos_x, pos_y, "guarana") {}
Guarana::~Guarana() {}

// efeito de recuperar vida
void Guarana::aplicarEfeito(Jogador& jogador) {
    jogador.adicionarItem("guarana", 1);
    jogador.recuperarVida(1);
}