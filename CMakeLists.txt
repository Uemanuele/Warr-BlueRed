cmake_minimum_required(VERSION 3.4)
project(Warr_BlueRed)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Character.h Weapon.h Physicalfeature.h Assaltrifle.h Sniperrifle.h Stamina.h HoldBreath.h AssaultTrooper.h Sniper.h)
add_executable(Warr_BlueRed ${SOURCE_FILES})