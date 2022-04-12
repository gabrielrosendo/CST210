#ifndef POTION_H
#define POTION_H

#include <iostream>

class Potion {
public:
	Potion() {}
	int deploy();
};

int Potion::deploy() {
	std::cout << "Magic potion attack!!"<<std::endl;
    return 0;
}

#endif