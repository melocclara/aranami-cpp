#ifndef COLETAVEL_H
#define COLETAVEL_H

#include <string>
#include "Jogador.hpp"

class Coletavel {
    protected:
        float pos_x, pos_y;
        std::string tipo;
    public:
        Coletavel(float pos_x, float pos_y, const std::string& tipo);
        virtual ~Coletavel();
        // Método virtual puro: cada coletável aplica seu próprio efeito no jogador
        virtual void aplicarEfeito(Jogador& jogador) = 0;
        // Getters
        float inline getPosX() const;
        float inline getPosY() const;
        std::string inline getTipo() const;
};

#endif
