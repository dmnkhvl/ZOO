//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H

#include "EmptyPlayingTile.h"
#include "Buildings/Base.h"
#include "Buildings/Wave.h"
#include <vector>
#include <array>

class Map {
    static const unsigned int m_numOfRows = 10;
    static const unsigned int m_numOfCols = 10;
    std::array<std::array<PlayingTile*,m_numOfRows>, m_numOfCols> m_grid;
public:
    Map();
//    PlayingTile* getTileFromMap(unsigned int row, unsigned int col);
    void addBuildingIntoMap();
    void print();
    void deleteMap();
    void accessStock();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H
