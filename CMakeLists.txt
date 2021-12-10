cmake_minimum_required(VERSION 3.20)
project(budovatelska_hra_zooprojekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(budovatelska_hra_zooprojekt main.cpp Game.cpp Game.h World/PlayingTile.cpp World/PlayingTile.h World/Grid.cpp World/Grid.h World/EmptyPlayingTile.cpp World/EmptyPlayingTile.h World/Base.cpp World/Base.h World/Stock.cpp World/Stock.h World/Wave.cpp World/Wave.h World/Wall.cpp World/Wall.h World/Gate.cpp World/Gate.h)
