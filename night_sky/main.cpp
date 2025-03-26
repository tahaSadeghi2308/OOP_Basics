#include "sky.hpp"
#include <raylib.h>
#include <unistd.h>
#include <iostream>

using namespace std;

void render(Sky sky) {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Star Chart");
    SetTargetFPS(60);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        
        srand(time(NULL));
        int BSnumber {1};
        for(auto row : sky.getStars())
            for(Star star : row){
                int randomNum {(rand() % 200) + 200};
                DrawCircle(star.getXPos() + randomNum  , star.getYPos() + randomNum , 10 , WHITE);
            }

        EndDrawing();
    }
    CloseWindow();
}

int main(){
    Sky andromeda;
    string isGraphycal;
    cout << "Would you like to see it graphycal ?? (Y/n) ";
    getline(cin , isGraphycal);
    if (isGraphycal == "y")
        render(andromeda);
    else 
        andromeda.display();

    return 0;
}
// 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