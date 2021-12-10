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
    //inicializacia
    std::vector<PlayingTile*> row1(9, nullptr);
    std::vector<PlayingTile*> row2(10, nullptr);
    std::vector<PlayingTile*> row3(10, nullptr);
    std::vector<PlayingTile*> row4(10, nullptr);
    std::vector<PlayingTile*> row5(10, nullptr);
    std::vector<PlayingTile*> row6(10, nullptr);
    std::vector<PlayingTile*> row7(10, nullptr);
    std::vector<PlayingTile*> row8(10, nullptr);
    std::vector<PlayingTile*> row9(10, nullptr);
    std::vector<PlayingTile*> row10(10, nullptr);
    //naplnenie

    row1.at(0) = new Wall();
    row1.at(1) = new Wall();
    row1.at(2) = new Wall();
    row1.at(3) = new Wall();
    row1.at(4) = new Gate();
    row1.at(5) = new Wall();
    row1.at(6) = new Wall();
    row1.at(7) = new Wall();
    row1.at(8) = new Wall();

    row2.at(0) = new Base();
    row2.at(1) = new EmptyPlayingTile;
    row2.at(2) = new EmptyPlayingTile;
    row2.at(3) = new EmptyPlayingTile;
    row2.at(4) = new EmptyPlayingTile;
    row2.at(5) = new EmptyPlayingTile;
    row2.at(6) = new EmptyPlayingTile;
    row2.at(7) = new EmptyPlayingTile;
    row2.at(8) = new EmptyPlayingTile;
    row2.at(9) = new Stock();

    row3.at(0) = new EmptyPlayingTile;
    row3.at(1) = new EmptyPlayingTile;
    row3.at(2) = new EmptyPlayingTile;
    row3.at(3) = new EmptyPlayingTile;
    row3.at(4) = new EmptyPlayingTile;
    row3.at(5) = new EmptyPlayingTile;
    row3.at(6) = new EmptyPlayingTile;
    row3.at(7) = new EmptyPlayingTile;
    row3.at(8) = new EmptyPlayingTile;
    row3.at(9) = new EmptyPlayingTile;

    row4.at(0) = new EmptyPlayingTile;
    row4.at(1) = new EmptyPlayingTile;
    row4.at(2) = new EmptyPlayingTile;
    row4.at(3) = new EmptyPlayingTile;
    row4.at(4) = new EmptyPlayingTile;
    row4.at(5) = new EmptyPlayingTile;
    row4.at(6) = new EmptyPlayingTile;
    row4.at(7) = new EmptyPlayingTile;
    row4.at(8) = new EmptyPlayingTile;
    row4.at(9) = new EmptyPlayingTile;

    row5.at(0) = new EmptyPlayingTile;
    row5.at(1) = new EmptyPlayingTile;
    row5.at(2) = new EmptyPlayingTile;
    row5.at(3) = new EmptyPlayingTile;
    row5.at(4) = new EmptyPlayingTile;
    row5.at(5) = new EmptyPlayingTile;
    row5.at(6) = new EmptyPlayingTile;
    row5.at(7) = new EmptyPlayingTile;
    row5.at(8) = new EmptyPlayingTile;
    row5.at(9) = new EmptyPlayingTile;

    row6.at(0) = new EmptyPlayingTile;
    row6.at(1) = new EmptyPlayingTile;
    row6.at(2) = new EmptyPlayingTile;
    row6.at(3) = new EmptyPlayingTile;
    row6.at(4) = new EmptyPlayingTile;
    row6.at(5) = new EmptyPlayingTile;
    row6.at(6) = new EmptyPlayingTile;
    row6.at(7) = new EmptyPlayingTile;
    row6.at(8) = new EmptyPlayingTile;
    row6.at(9) = new EmptyPlayingTile;

    row7.at(0) = new EmptyPlayingTile;
    row7.at(1) = new EmptyPlayingTile;
    row7.at(2) = new EmptyPlayingTile;
    row7.at(3) = new EmptyPlayingTile;
    row7.at(4) = new EmptyPlayingTile;
    row7.at(5) = new EmptyPlayingTile;
    row7.at(6) = new EmptyPlayingTile;
    row7.at(7) = new EmptyPlayingTile;
    row7.at(8) = new EmptyPlayingTile;
    row7.at(9) = new EmptyPlayingTile;

    row8.at(0) = new Wave;
    row8.at(1) = new Wave;
    row8.at(2) = new Wave;
    row8.at(3) = new Wave;
    row8.at(4) = new Wave;
    row8.at(5) = new Wave;
    row8.at(6) = new Wave;
    row8.at(7) = new Wave;
    row8.at(8) = new Wave;
    row8.at(9) = new Wave;

    row9.at(0) = new Wave;
    row9.at(1) = new Wave;
    row9.at(2) = new Wave;
    row9.at(3) = new Wave;
    row9.at(4) = new Wave;
    row9.at(5) = new Wave;
    row9.at(6) = new Wave;
    row9.at(7) = new Wave;
    row9.at(8) = new Wave;
    row9.at(9) = new Wave;

    row10.at(0) = new Wave;
    row10.at(1) = new Wave;
    row10.at(2) = new Wave;
    row10.at(3) = new Wave;
    row10.at(4) = new Wave;
    row10.at(5) = new Wave;
    row10.at(6) = new Wave;
    row10.at(7) = new Wave;
    row10.at(8) = new Wave;
    row10.at(9) = new Wave;



    m_grid.push_back(row1);
    m_grid.push_back(row2);
    m_grid.push_back(row3);
    m_grid.push_back(row4);
    m_grid.push_back(row6);
    m_grid.push_back(row7);
    m_grid.push_back(row8);
    m_grid.push_back(row9);
    m_grid.push_back(row10);


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
