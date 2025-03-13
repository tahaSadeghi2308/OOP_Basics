#include "game.hpp"

int main(int argc , char **argv){
    Game game;
    for (int i {}; i < 3; i++){
        game.add_character();
    }
    return 0;
}