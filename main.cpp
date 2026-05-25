#include "Jogador.hpp"
#include "Tela.hpp"
#include "Inimigos/Onca.hpp"
#include "Inimigos/Capivara.hpp"
#include "Inimigos/Tucano.hpp"
#include "Inimigos/Boss.hpp"
#include "Coletaveis/Pipa.hpp"
#include "Coletaveis/Pedra.hpp"
#include "Coletaveis/Guarana.hpp"
#include <vector>

int main() {
    std::cout << "============= ECOS DE ARANÃMI =============\n" << std::endl;
    
    // JOGADOR
    Jogador heliconia; // criação do objeto
    std::cout << "Criação de Helicônia" << std::endl;
    std::cout << heliconia << std::endl;

    // PULO SIMPLES
    std::cout << "Pulo de Helicônia" << std::endl;
    heliconia.pular(); // pula
    std::cout << heliconia << std::endl;;
    heliconia.update(); // cai (gravidade)
    std::cout << heliconia << std::endl;

    // INIMIGOS
    std::vector<Inimigo*> inimigos;

        // Capivara 
        inimigos.push_back(new Capivara(8, Tela::getChao())); // criação da capivara

        inimigos[0]->atacar(heliconia); // ataque da capivara
        inimigos[0]->atacar(heliconia); // tentativa de atacar em cooldown
        std::cout << "Ataque da Capivara" << std::endl;
        std::cout << heliconia << std::endl;


        heliconia.atacar(*inimigos[0]); // helicônia ataca capivara
        std::cout << "Ataque da Helicônia" << std::endl;
        std::cout << heliconia << std::endl;
        
        if (inimigos[0]->getVida() == 0){ // a capivara morre :((
            delete inimigos[0];
            inimigos.erase(inimigos.begin());
        }
    }

    
    /*
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
    */
