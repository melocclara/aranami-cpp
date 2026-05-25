#ifndef TELA_H
#define TELA_H

class Tela {
    private:
        static double limite_esquerdo;
        static double limite_direito;
        static double chao;
        static double teto;

    public:
        static double inline getLimiteEsquerdo() { return limite_esquerdo; }
        static double inline getLimiteDireito() { return limite_direito; }
        static double inline getChao() { return chao; }
        static double inline getTeto() { return teto; }
};

#endif