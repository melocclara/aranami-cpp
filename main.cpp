#include "Jogador.hpp"
#include "Tela.hpp"
#include "Inimigos/Onca.hpp"
#include "Inimigos/Capivara.hpp"
#include "Inimigos/Tucano.hpp"
#include "Inimigos/Boss.hpp"
#include "Projeteis/TiroCapivara.hpp"
#include "Projeteis/TiroTucano.hpp"
#include "Projeteis/TiroJogador.hpp"
#include "Coletaveis/Pipa.hpp"
#include "Coletaveis/Pedra.hpp"
#include "Coletaveis/Guarana.hpp"
#include <vector>

int main() {
    std::cout << "============= ECOS DE ARANÃMI =============\n" << std::endl;
    
    // JOGADOR
    Jogador heliconia; // criação do objeto
    std::cout << heliconia;

    // PULO SIMPLES
    heliconia.pular(); // pula
    std::cout << heliconia;
    heliconia.update(); // cai (gravidade)
    std::cout << heliconia;

    // INIMIGOS
    std::vector<Inimigo*> inimigos;

    // Capivara 
    // O primeiro ataque bate na helicônia e no segundo ela pula e desvia
    inimigos.push_back(new Capivara(8, Tela::getChao())); // criação da capivara
    std::vector<Projetil*> balasGlobais; // criação do vetor de projeteis ativos

    // Primeiro ataque
    inimigos[0]->atacar(heliconia, balasGlobais); // ataque da capivara
    for (Projetil* tiro : balasGlobais){ // loop do movimento do tiro
        if (tiro->isAtivo()){
            tiro->update();

            if(tiro->getPosX() == heliconia.getPosX() && tiro->getPosY() == heliconia.getPosY()){ // se colidir com o jogador, dá dano e desativa
                heliconia.receberDano(tiro->getDano());
                tiro->desativar(); 
        }
        }
    
    // 
    
        
    }

    

    // PIPA (COLETÁVEL)
    Coletavel* c1 = new Pipa(7.0, 0.0);
    Pipa* p1 = dynamic_cast<Pipa*>(c1);

    if(p1) {
        p1->getPosX();
    } else {
        std::cout << "O cast falhou!" << std::endl;
    }
    delete c1;

    return 0;
}