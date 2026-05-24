#ifndef PROJETIL_H
#define PROJETIL_H

class Projetil{
    protected:
        double pos_x, pos_y;
        double vel_x, vel_y;
        int dano;
        bool ativo; // falso se o projétil já colidiu com algo
        
    public:
        Projetil(double pos_x, double pos_y, double vel_x, double vel_y, int dano);
        virtual ~Projetil();

        virtual void update() = 0;
        int inline getDano() const { return dano; };
        double inline getPosX() const { return pos_x; };
        double inline getPosY() const { return pos_y; };

        bool inline isAtivo() const { return ativo; };
        virtual void desativar();
};

#endif
