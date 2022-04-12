#ifndef ARENA_H
#define ARENA_H

#include "Character.h"

class Arena {
    public:
        Character hero;
        Character villain;
    private:
        Arena() {}
        Arena(Character, Character);
        const void showOponent();
        bool fight();
};

Arena::Arena(Character c1, Character c2) {
    hero = c1;
    villain = c2;
}

const void Arena::showOponent() {
    villain.showCharacter();
}

#endif