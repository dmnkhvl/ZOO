//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_GRID_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_GRID_H
#include "EmptyPlayingTile.h"
#include "Base.h"
#include <vector>

class Grid {
//    unsigned int m_numberOfRows;
//    unsigned int m_numberOfColumns;
    std::vector<std::vector<PlayingTile*>> m_grid;
public:
    Grid();
    void print();
    void accessStock();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_GRID_H
