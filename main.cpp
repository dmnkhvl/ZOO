#include <iostream>
#include "World/Map.h"
#include "Game.h"

int main() {
    Game* game = new Game();
    game->play();

    delete game;
    return 0;
}
