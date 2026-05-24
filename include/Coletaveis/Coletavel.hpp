#ifndef COLETAVEL_H
#define COLETAVEL_H

#include <string>
#include "../Jogador.hpp"

class Coletavel {
    protected:
        double pos_x, pos_y;
        std::string tipo;
        static std::vector<Coletavel*> coletaveis_chao;


    public:
        Coletavel(double pos_x, double pos_y, const std::string& tipo);
        virtual ~Coletavel();
        virtual void aplicarEfeito(Jogador& jogador) = 0;
        double inline getPosX() const { return pos_x; };
        double inline getPosY() const { return pos_y; };
        std::string inline getTipo() const { return tipo; };
        static std::vector<Coletavel*>& getColetaveisChao();
};

#endif
