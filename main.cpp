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
    
    // TELA
        // Getters da tela
        Tela::getLimiteEsquerdo();
        Tela::getLimiteDireito();
        Tela::getTeto();

    // JOGADOR
    Jogador heliconia; // criação do objeto
    std::cout << "Criação de Helicônia" << std::endl;
    std::cout << heliconia << std::endl;
    std::cout << std::endl;


        // Pulo Simples
        std::cout << "Pulo de Helicônia" << std::endl;
        heliconia.pular(); // pula
        std::cout << heliconia << std::endl;;
        heliconia.update(); // cai (gravidade)
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        
        // Mover
        std::cout << "Movimento de helicônia" << std:: endl;
        heliconia.mover(1);
        std::cout << heliconia << std::endl;
        heliconia.mover(-1);
        heliconia.mover(-1);
        std::cout << heliconia << std::endl;
        std::cout << std::endl;

        // Verificar se ta viva
        if(heliconia.isVivo()){
            std::cout << "Helicônia está viva!!" << std::endl;
        }
        else{
            std::cout << "Helicônia está morta." << std::endl;
        }

        if(heliconia.getDirecao() == 1){
            std::cout << "Helicônia está olhando para a direita!" << std::endl;
        }
        else{
            std::cout << "Helicônia está olhando para a esquerda!" << std::endl;
        }
        std::cout << std::endl;

        // Invencibilidade
        heliconia.receberDano(1);
            std::cout << "Helicônia recebeu dano" << std::endl << heliconia << std::endl;
        heliconia.update();
        heliconia.receberDano(1);
            std::cout << "Helicônia não recebeu dano porque ainda está invencivel." << std::endl << heliconia << std::endl;
        
        // Getters
        std::cout << "Helicônia está na posição (" << heliconia.getPosX() << ", " << heliconia.getPosY() << ")." << std::endl;
        std::cout << std::endl;
        
        // Exceções de cura e dano negativo
        try {
            std::cout << "Dano negativo em Heliconia" << std::endl;
            heliconia.receberDano(-5);
        } catch (const ValorInvalidoException& e) {
            std::cout << e.what() << std::endl;
        }

        try {
            std::cout << "Cura negativa em Heliconia" << std::endl;
            heliconia.recuperarVida(-10);
        } catch (const ValorInvalidoException& e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;

    // INIMIGOS
    std::vector<Inimigo*> inimigos;

        // Capivara 
        inimigos.push_back(new Capivara(8, Tela::getChao())); // criação da capivara

        inimigos[0]->atacar(heliconia); // ataque da capivara
        inimigos[0]->atacar(heliconia); // tentativa de atacar em cooldown
        std::cout << "Ataque da Capivara" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        heliconia.update();
        inimigos[0]->atualizarCooldown();

        heliconia.atacar(*inimigos[0]); // helicônia ataca capivara
        std::cout << "Ataque da Helicônia" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        
        heliconia.atacar(*inimigos[0]); // helicônia ataca capivara (denovo), teste do cooldown
        std::cout << "Ataque da Helicônia" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;

        // Exceção da capivara
        try {
            inimigos[0]->receberDano(-5);
        } catch (const ValorInvalidoException& e) {}

        if (inimigos[0]->getVida() == 0){ // a capivara morre :((
            delete inimigos[0];
            inimigos.erase(inimigos.begin());
        }
        heliconia.update();
        std::cout << std::endl;

        // Onça
        inimigos.push_back(new Onca(10.0, Tela::getChao())); // criação da onça
        inimigos[0]->atacar(heliconia); //ataque da onça
        inimigos[0]->atacar(heliconia); // tentativa de atacar em cooldown
        std::cout << "Ataque da Onça" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        heliconia.update();
        inimigos[0]->atualizarCooldown();
        
        if (inimigos[0]->getVida() == 0){ // a onça morre :((
            delete inimigos[0];
            inimigos.erase(inimigos.begin());
        }
        heliconia.update();
        std::cout << std::endl;
        
        // Tucano
        inimigos.push_back(new Tucano(13, 8));
        inimigos[0]->atacar(heliconia); // ataque do tucano
        inimigos[0]->atacar(heliconia); // tentativa de atacar em cooldown
        std::cout << "Ataque do Tucano" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        heliconia.update();
        inimigos[0]->atualizarCooldown();

        if (inimigos[0]->getVida() == 0){
            delete inimigos[0];
            inimigos.erase(inimigos.begin());
        }

        // Boss
        inimigos.push_back(new Boss(19, Tela::getChao())); //ataque do Boss
        inimigos[0]->atacar(heliconia);
        inimigos[0]->atacar(heliconia);
        std::cout << "Ataque do Boss" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;

        inimigos[0]->receberDano(12); //ataque da helicônia
        std::cout << "Ataque final da Helicônia" << std::endl;
        std::cout << heliconia << std::endl;
        std::cout << std::endl;

        if (inimigos[0]->getVida() == 0){
            delete inimigos[0];
            inimigos.erase(inimigos.begin());
        }


    // COLETÁVEIS
        // Pipa
        heliconia.getItem("pipa"); 
        Coletavel* c1 = new Pipa(7.0, 0.0);

        std::cout << "Posição da Pipa (x, y): " << c1->getPosX() << ", " << c1->getPosY() << std::endl;
        c1->getTipo();
        std::cout << Coletavel::getColetaveisChao().size() << std::endl;
        c1->aplicarEfeito(heliconia);
        std::cout << std::endl;
        
        // Execução do pulo duplo
        std::cout << "Pulo duplo de Helicônia" << std::endl;
        heliconia.pular();
        heliconia.pular();
        std::cout << heliconia << std::endl;
        std::cout << std::endl;
        heliconia.pular(); // (não vai funcionar, porque é triplo)
        delete c1;
        heliconia.update();

        // Guaraná
        Coletavel* c2 = new Guarana(9.0, 0.0); // criação do coletável guaraná
        std::cout << "Posição do Guaraná (x, y): " << c2->getPosX() << ", " << c2->getPosY() << std::endl;
        heliconia.receberDano(3); 
        std::cout << heliconia;

        c2->aplicarEfeito(heliconia);
        std::cout << heliconia; 
        delete c2;
        std::cout << std::endl;

        // Pedra
        Coletavel* c3 = new Pedra(12.0, 0.0); // criação do coletável pedra
        std::cout << "Posição da Pedra (x, y): " << c3->getPosX() << ", " << c3->getPosY() << std::endl;
        std::cout << "Helicônia pega a pedea.";
        c3->aplicarEfeito(heliconia);
        std::cout << heliconia;
        delete c3;
        std::cout << std::endl;

        return 0;
    }
