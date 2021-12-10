//
// Created by Dominik Havel on 10/12/2021.
//

#include <iostream>
#include "Grid.h"

Grid::Grid() {
    //inicializacia
    std::vector<PlayingTile*> row1(10, nullptr);
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

    row1.at(0) = new EmptyPlayingTile;
    row1.at(1) = new EmptyPlayingTile;
    row1.at(2) = new EmptyPlayingTile;
    row1.at(3) = new EmptyPlayingTile;
    row1.at(4) = new EmptyPlayingTile;
    row1.at(5) = new EmptyPlayingTile;
    row1.at(6) = new EmptyPlayingTile;
    row1.at(7) = new EmptyPlayingTile;
    row1.at(8) = new EmptyPlayingTile;
    row1.at(9) = new EmptyPlayingTile;

    row2.at(0) = new EmptyPlayingTile;
    row2.at(1) = new EmptyPlayingTile;
    row2.at(2) = new EmptyPlayingTile;
    row2.at(3) = new EmptyPlayingTile;
    row2.at(4) = new EmptyPlayingTile;
    row2.at(5) = new EmptyPlayingTile;
    row2.at(6) = new EmptyPlayingTile;
    row2.at(7) = new EmptyPlayingTile;
    row2.at(8) = new EmptyPlayingTile;
    row2.at(9) = new EmptyPlayingTile;

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

    row8.at(0) = new EmptyPlayingTile;
    row8.at(1) = new EmptyPlayingTile;
    row8.at(2) = new EmptyPlayingTile;
    row8.at(3) = new EmptyPlayingTile;
    row8.at(4) = new EmptyPlayingTile;
    row8.at(5) = new EmptyPlayingTile;
    row8.at(6) = new EmptyPlayingTile;
    row8.at(7) = new EmptyPlayingTile;
    row8.at(8) = new EmptyPlayingTile;
    row8.at(9) = new EmptyPlayingTile;

    row9.at(0) = new EmptyPlayingTile;
    row9.at(1) = new EmptyPlayingTile;
    row9.at(2) = new EmptyPlayingTile;
    row9.at(3) = new EmptyPlayingTile;
    row9.at(4) = new EmptyPlayingTile;
    row9.at(5) = new EmptyPlayingTile;
    row9.at(6) = new EmptyPlayingTile;
    row9.at(7) = new EmptyPlayingTile;
    row9.at(8) = new EmptyPlayingTile;
    row9.at(9) = new EmptyPlayingTile;

    row10.at(0) = new EmptyPlayingTile;
    row10.at(1) = new EmptyPlayingTile;
    row10.at(2) = new EmptyPlayingTile;
    row10.at(3) = new EmptyPlayingTile;
    row10.at(4) = new EmptyPlayingTile;
    row10.at(5) = new EmptyPlayingTile;
    row10.at(6) = new EmptyPlayingTile;
    row10.at(7) = new EmptyPlayingTile;
    row10.at(8) = new EmptyPlayingTile;
    row10.at(9) = new EmptyPlayingTile;



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

void Grid::print() {
    for(auto row:m_grid){
        for(auto PlayingTile:row){
            PlayingTile->print();
            std::cout << " ";
        }
        std::cout << std::endl;
    }

}
