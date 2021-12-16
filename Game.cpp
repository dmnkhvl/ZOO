//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Game.h"


void Game::mapInic() {
    m_map = new Map();
}

void Game::play() {
    mapInic();
    mainDesicionSwitch();
}

void Game::mainDesicionSwitch() {
    int decision = 0;
    std::string name = "noname";
    std::cout << "Welcome to our little building game. \nWhat's your name?" << std::endl;
    std::cin >> name;
    std::cout << "Now is your time to start building your village. \n";

    while (decision != 99) {
        std::cout << name << ", what you want to do? \n[1] - See map | [2] - Add Building | [3] - See resources | [4] - See building detail | [0] - help | [99] - Exit " << std::endl;
        std::cin >> decision;
        switch (decision) {
            case 0:
                std::cout << "\nHelp:" << std::endl;
                std::cout << "- You can build only on empty tiles" << std::endl;
                std::cout << "- Sea tiles are for ships" << std::endl;
                std::cout << "- You can't build on wall tiles \n" << std::endl;
                break;
            case 1:
                m_map->print();
                break;
            case 2:
                m_map->addBuildingIntoMap();
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
