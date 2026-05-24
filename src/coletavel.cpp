#include "Coletavel.hpp"

Coletavel::Coletavel(double pos_x, double pos_y, const std::string& tipo) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->tipo = tipo;
};

Coletavel::~Coletavel() {};
