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
    std::cout << "Welcome! \n What's your name?" << std::endl;
    std::cin >> name;

    while (decision != 99) {
        std::cout << name << " what you want to do [0] - help, [1] - See map, [99] - Exit " << std::endl;
        std::cin >> decision;
        switch (decision) {
            case 0:
                std::cout << "There is no help for now, just keep trying" << std::endl;
                break;
            case 1:
                m_map->print();
                break;
            default:
                break;
        }
    }
}

Game::Game() {

}
