//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
#include "World/Grid.h"

class Game {
    Grid* m_map;
public:
    Game();
    void play();
    void mapInic();
    void seeResources();
    void mainDesicionSwitch();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
