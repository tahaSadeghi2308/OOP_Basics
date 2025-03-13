#include "game.hpp"
#include <iostream>

using namespace std;

Game::Game() {
    Character person("ali" , 50 , 50);
    characters.push_back(person);
}

void Game::add_character() {
    string name;
    unsigned short health , power;
    cin >> name >> health >> power;
    Character person("ali" , health , power);
    characters.push_back(person);
}
