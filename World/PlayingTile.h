//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_PLAYINGTILE_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_PLAYINGTILE_H

enum class Building{
    Barracks,Walls,Saw,Mine,Farm,House,Stock
};


class PlayingTile {
    int m_level = 1;
    int m_woodCost;
    int m_stoneCost;
public:
    //prinutenie potomkov aby mali tuto funckiu
    virtual void print() = 0;
    int getLevel();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_PLAYINGTILE_H
