//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_STOCK_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_STOCK_H


#include "../PlayingTile.h"

class Stock: public PlayingTile{
    int m_wood = 0;
    int m_stone = 0;
    int m_gold = 0;
    int m_food = 0;
public:
    Stock();
    void printResources();
    void print();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_STOCK_H
