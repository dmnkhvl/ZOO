cmake_minimum_required(VERSION 3.20)
project(budovatelska_hra_zooprojekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(budovatelska_hra_zooprojekt main.cpp Game.cpp Game.h World/PlayingTile.cpp World/PlayingTile.h World/Map.cpp World/Map.h World/EmptyPlayingTile.cpp World/EmptyPlayingTile.h World/Buildings/Base.cpp World/Buildings/Base.h World/Buildings/Stock.cpp World/Buildings/Stock.h World/Buildings/Wave.cpp World/Buildings/Wave.h World/Buildings/Wall.cpp World/Buildings/Wall.h World/Buildings/Gate.cpp World/Buildings/Gate.h)
