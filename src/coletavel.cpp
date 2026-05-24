#include "Coletavel.hpp"

Coletavel::Coletavel(float pos_x, float pos_y, const std::string& tipo) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->tipo = tipo;
};

Coletavel::~Coletavel() {};

float Coletavel::getPosX() const {
    return this->pos_x;
};

float Coletavel::getPosY() const {
    return this->pos_y;
};

std::string Coletavel::getTipo() const {
    return this->tipo;
};
