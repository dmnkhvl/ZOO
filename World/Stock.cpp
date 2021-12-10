//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Stock.h"

Stock::Stock() {
    m_food = 100;
    m_gold = 500;
    m_stone = 250;
    m_wood = 250;
}

void Stock::print() {
    std::cout << "-S1-";
}

void Stock::printResources() {
    std::cout << "You have: " << std::endl;
    std::cout << "Gold: " << m_gold<< std::endl;
    std::cout << "Food: " << m_food<< std::endl;
    std::cout << "Stone " << m_stone<< std::endl;
    std::cout << "Wood: " << m_wood<< std::endl;
}
