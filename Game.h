//
// Created by Dominik Havel on 10/12/2021.
//

#ifndef BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
#define BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
#include "World/Map.h"

class Game {
    Map* m_map;
public:
    Game();
    void play();
    void mapInic();
    void seeResources();
    void mainDesicionSwitch();
};


#endif //BUDOVATELSKA_HRA_ZOOPROJEKT_GAME_H
