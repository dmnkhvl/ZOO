//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H

#include "EmptyPlayingTile.h"
#include "Buildings/Base.h"
#include <vector>

class Map {
//    unsigned int m_numberOfRows;
//    unsigned int m_numberOfColumns;
    std::vector<std::vector<PlayingTile *>> m_grid;
public:
    Map();

    void print();

    void accessStock();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_MAP_H
