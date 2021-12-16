//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Map.h"
#include "Buildings/Stock.h"
#include "Buildings/Wave.h"
#include "Buildings/Wall.h"
#include "Buildings/Gate.h"

Map::Map() {
    for(int i=0; i < m_numOfCols; i++){
        for(int j=0; j < m_numOfRows; j++){
            //vytvorenie hradieb
            if (i < 1){
                m_grid[i][j] = new Wall();
            }
            // vytvorenie zakladnych tilov
            else if (i < m_numOfRows - 3) {
                m_grid[i][j] = new EmptyPlayingTile();
            }
            // vytvorenie vody
            else {
                m_grid[i][j] = new Wave();
            }
        }
    }
    // vytvorenie Zakladnych budov
    m_grid[1][0] = new Base();
    m_grid[1][1] = new Stock();
    // vytvorenie Brany
    m_grid[0][m_numOfCols /2] = new Gate();
    m_grid[0][(m_numOfCols /2) - 1 ] = new Gate();
}


void Map::print() {
    std::cout << "-----------------------MAP-----------------------" << std::endl;
    for(auto row:m_grid){
        for(auto PlayingTile:row){
            PlayingTile->print();
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";

}

void Map::addBuildingIntoMap() {
    unsigned int row;
    unsigned int col;
    std::cout << "Where would you like to build your building?" << std::endl;
    std::cout << "Row: "; std::cin >> row; row--;
    std::cout << "Col: "; std::cin >> col; col--;
    if ((row < m_numOfRows) && (col < m_numOfCols)){
        std::cout << "What type of building would you like?" << std::endl;
        std::cout << "[1] - Wave [2] - Wall [99] - exit " << std::endl;
        unsigned int decision;
        std::cin >> decision;
        switch (decision) {
            case 1:
                m_grid[row][col] = new Wave();
                std::cout << "Wave built" << std::endl;
                break;
            case 2:
                m_grid[row][col] = new Wall();
                std::cout << "Wall built" << std::endl;;
                break;
            default:
                break;
        }
    } else {
        std::cerr << "Invalid position" << std::endl;
    }

}


//void Map::accessStock() {
//    m_grid.at(2)
//}

//void Map::addBuilding(unsigned int row, unsigned int col, Building type) {
//    if (type == Building::Base && base == 0){
//        Base* base = new Base();
//        base->print();
//        base = 1;
//    }
//}
