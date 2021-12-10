//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Game.h"


void Game::mapInic() {
    m_map = new Grid();
}

void Game::play() {
    mapInic();
    mainDesicionSwitch();
}

void Game::mainDesicionSwitch() {
    int decision = 0;
    std::string name = "noname";
    std::cout << "Welcome! \nWhat's your name?" << std::endl;
    std::cin >> name;

    while (decision != 99) {
        std::cout << name << ", what you want to do? \n[1] - See map | [2] - Add Building | [3] - See resources | [4] - See building detail | [0] - help | [99] - Exit " << std::endl;
        std::cin >> decision;
        switch (decision) {
            case 0:
                std::cout << "There is no help for now" << std::endl;
                break;
            case 1:
                m_map->print();
                break;
            case 2:
                m_map->print();
                break;
            case 3:
                m_map->print();
                break;
            case 4:
                m_map->print();
                break;
            default:
                break;
        }
    }
}

Game::Game() {

}



//void Game::seeResources() {
//
//}
