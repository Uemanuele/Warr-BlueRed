#include <iostream>
#include "Character.h"
#include "Sniper.h"
#include "Sniperrifle.h"
#include "AssaultTrooper.h"

#define _SNIPER

using namespace std;

int main() {
    Character *hero;
    Weapon *weapon;

#ifdef _SNIPER
    hero = new Sniper();
#else
    hero = new AssaultTrooper();
#endif

    hero->setPhisicalFeature(hero->getPhysicalFeature());
    hero->setWeapon(hero->getWeapon());
    hero->Do();

    return 0;
}