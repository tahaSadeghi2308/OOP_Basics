#ifndef GAME_CHARACTER_CHARACTER_H
#define GAME_CHARACTER_CHARACTER_H

#include <string>
#include <iostream>
#include <vector>

struct Skill{
    std::string skillName;
    unsigned short level;
};

class Character {
    std::string name;
    unsigned short health; // number between 0 - 100
    unsigned short power;  // number between 0 - 100
    std::vector<Skill> skills;
public:
    Character(
            std::string name,
            unsigned short health,
            unsigned short power
    );
    template<typename T>
    void set_value(T value);
};



#endif
