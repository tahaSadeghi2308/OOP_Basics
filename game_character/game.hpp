#ifndef GAME_CHARACTER_GAME_H
#define GAME_CHARACTER_GAME_H

#include <vector>
#include "character.hpp"

class Game{
    std::vector<Character> characters;
public:
    Game();
    void add_character();
};

#endif
