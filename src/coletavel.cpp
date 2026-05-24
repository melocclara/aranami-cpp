#include "Coletavel.hpp"

std::vector<Coletavel*> Coletavel::coletaveis_chao;

Coletavel::Coletavel(double pos_x, double pos_y, const std::string& tipo) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->tipo = tipo;
    coletaveis_chao.push_back(this);
};

Coletavel::~Coletavel() {};

std::vector<Coletavel*>& Coletavel::getColetaveisChao() {
    return coletaveis_chao;
}
