//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Grid.h"

Grid::Grid() {
    //inicializacia
    std::vector<PlayingTile*> row1(5, nullptr);
    std::vector<PlayingTile*> row2(5, nullptr);
    std::vector<PlayingTile*> row3(5, nullptr);
    std::vector<PlayingTile*> row4(5, nullptr);
    std::vector<PlayingTile*> row5(5, nullptr);
    //naplnenie
    row1.at(0) = new EmptyPlayingTile;
    row1.at(1) = new EmptyPlayingTile;
    row1.at(2) = new EmptyPlayingTile;
    row1.at(3) = new EmptyPlayingTile;
    row1.at(4) = new EmptyPlayingTile;

    row2.at(0) = new EmptyPlayingTile;
    row2.at(1) = new EmptyPlayingTile;
    row2.at(2) = new EmptyPlayingTile;
    row2.at(3) = new EmptyPlayingTile;
    row2.at(4) = new EmptyPlayingTile;

    row3.at(0) = new EmptyPlayingTile;
    row3.at(1) = new EmptyPlayingTile;
    row3.at(2) = new EmptyPlayingTile;
    row3.at(3) = new EmptyPlayingTile;
    row3.at(4) = new EmptyPlayingTile;

    row4.at(0) = new EmptyPlayingTile;
    row4.at(1) = new EmptyPlayingTile;
    row4.at(2) = new EmptyPlayingTile;
    row4.at(3) = new EmptyPlayingTile;
    row4.at(4) = new EmptyPlayingTile;

    row5.at(0) = new EmptyPlayingTile;
    row5.at(1) = new EmptyPlayingTile;
    row5.at(2) = new EmptyPlayingTile;
    row5.at(3) = new EmptyPlayingTile;
    row5.at(4) = new EmptyPlayingTile;

    m_grid.push_back(row1);
    m_grid.push_back(row2);
    m_grid.push_back(row3);
    m_grid.push_back(row4);
    m_grid.push_back(row5);
   

}

void Grid::print() {
    for(auto row:m_grid){
        for(auto PlayingTile:row){
            PlayingTile->print();
            std::cout << " ";
        }
        std::cout << std::endl;
    }

}
