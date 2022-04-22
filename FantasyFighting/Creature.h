#ifndef CREATURE_H
#define CREATURE_H
#include <string>

class Creature {
    private:
        std::string name;
    public:
        Creature() {}
        virtual void create() = 0;
};

#endif