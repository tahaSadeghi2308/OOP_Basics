#include "character.hpp"
#include <iostream>

template<typename T>
T Character::set_value(T value) {
    T correctValue;
    if (value <= 100 && value >= 0){
        correctValue = value;
    }
    else {
        correctValue = 75;
    }
    return correctValue
}

Character::Character(
    std::string name,
    unsigned short health,
    unsigned short power
): name(name) {
    this->health = set_value(health);
    this->power = set_value(power);
}

