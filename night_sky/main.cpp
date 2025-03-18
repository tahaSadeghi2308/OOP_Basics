#include "sky.hpp"
#include <raylib.h>

using namespace std;

void render(Sky sky)
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Star Chart");
    SetTargetFPS(6);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        
        for(auto const row : sky.getStars()){
            for(Star star: row){
                DrawCircle(star.getXPos(), star.getYPos(), star.getBrightness(), WHITE);
            }
        }

        EndDrawing();
    }
    CloseWindow();
}

int main()
{
    Sky andromeda;
    render(andromeda);
    return 0;
}