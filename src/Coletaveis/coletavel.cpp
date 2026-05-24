#include "Coletaveis/Coletavel.hpp"

std::vector<Coletavel*> Coletavel::coletaveis_chao;

Coletavel::Coletavel(double pos_x, double pos_y, const std::string& tipo) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->tipo = tipo;
    coletaveis_chao.push_back(this);
};

Coletavel::~Coletavel() { //busca na lista dos coletaveis que estão no chão o objeto a ser destruído, quando acha, deleta do vetor e para. 
    for (auto it = coletaveis_chao.begin(); it != coletaveis_chao.end(); ++it) {
        if (*it == this) { 
            coletaveis_chao.erase(it); 
            break;
        }
    }
}

std::vector<Coletavel*>& Coletavel::getColetaveisChao() {
    return coletaveis_chao;
}
