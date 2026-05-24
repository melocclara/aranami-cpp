#include "Jogador.hpp"
#include "../Coletaveis/Pedra.hpp"
#include "../Projeteis/TiroJogador.hpp"
#include "Tela.hpp"

Jogador::Jogador(int max_vida, double pos_x, double pos_y, double vel_x, double vel_y) {
    this->max_vida = max_vida;
    this->vida = max_vida;
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->vel_x = vel_x;
    this->vel_y = vel_y;
    this->direcao = 1;
    invencib_timer = 0;
    tiro_cooldown = 0;
    pulo_duplo = false;
    inventario.insert({"pedra", 8});
}

void Jogador::mover(int direcao) {
    this->direcao = direcao;
    this->pos_x += (vel_x*direcao);
}

bool Jogador::noAr() const {
    return this->pos_y > 0;
}

void Jogador::pular(){
    if(noAr()){
        if(pulo_duplo == true) {
            pos_y += vel_y;
            pulo_duplo = false;
        }
    }
    else {
        pos_y += vel_y; 
        if (getItem("pipa") > 0) {
            pulo_duplo = true; 
        } else {
            pulo_duplo = false;
        }
    }
}

void Jogador::receberDano(int dano) {
    if (dano < 0) {
        throw ValorInvalidoException();
    }

    if(invencib_timer == 0) {
        this-> vida -= dano;
        invencib_timer = 2;
    }
}

void Jogador::recuperarVida(int hp) {
    if (hp < 0) {
        throw ValorInvalidoException();
    }
    this->vida = std::min(this->vida + hp, max_vida);
}

void Jogador::atirar(std::vector<Projetil*>& balas) {
    if(tiro_cooldown > 0 || inventario["pedra"] == 0){
        return;
    }
    else{
        inventario["pedra"] -= 1;
        tiro_cooldown = 2;
        TiroJogador* pedra = new TiroJogador(this->pos_x, this->pos_y, direcao);
        balas.push_back(pedra);
    }
}

void Jogador::adicionarItem(std::string item, int quantidade) {
    inventario[item] += quantidade;
}

std::ostream& operator<<(std::ostream& os, const Jogador& j) {
    os << "--- Status do Jogador ---\n";
    os << "Vida: " << j.vida << "/" << j.max_vida << "\n";
    os << "Posição: (" << j.pos_x << ", " << j.pos_y << ")\n";
    os << "Velocidade: (" << j.vel_x << ") | Direção: " << j.direcao << "\n";
    os << "Invencibilidade: " << j.invencib_timer << " | Cooldown do Tiro: " << j.tiro_cooldown << "\n";
    
    os << "Inventário:\n";
    if (j.inventario.empty()) {
        os << "(vazio)\n";
    } else {
        for (std::pair<std::string, int> item : j.inventario) {
            os << " - " << item.first << ": " << item.second << "\n";
        }
    }
    os << "=========================\n";
    
    return os;
}

void Jogador::update() { // vai ser chamado uma vez por turno(?) na main
    if (this->tiro_cooldown > 0) {
        this->tiro_cooldown--;
    }

    if (this->invencib_timer > 0) {
        this->invencib_timer--;
    }

    if (noAr()) {
        this->pos_y -= this->vel_y; 

        if (this->pos_y <= Tela::getChao()) {
            this->pos_y = Tela::getChao();
        }
    }
}