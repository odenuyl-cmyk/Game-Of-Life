#include <format>
#include <iostream>
#include "helpers.h"
#include <raylib.h>
using namespace std;

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 850;
    const int wStep = screenWidth / cols;
    const int hStep = (screenHeight - 50) / rows;
    int generation = 0;
    init(pixels);
    init(copyPixels);
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(120);

    while (!WindowShouldClose())
    {
        if (IsMouseButtonDown(0)) {
            int x = GetMouseX()/wStep;
            int y = GetMouseY()/hStep;
            add(y*cols + x);
        }

        if (IsMouseButtonDown(1)) {
            int x = GetMouseX()/wStep;
            int y = GetMouseY()/hStep;
            remove(y*cols + x);
        }

        if (IsKeyPressed(KEY_SPACE)) {
            SetTargetFPS(10);
        }
        if (IsKeyReleased(KEY_SPACE)) {
            SetTargetFPS(120);
        }

        if (IsKeyDown(KEY_SPACE)) {
            step();
            generation += 1;
        }

        if (IsKeyPressed(KEY_R)) {
            init(pixels);
            init(copyPixels);
            generation = 0;
        }

        BeginDrawing();
        
        for (int i = 0; i < rows*cols; i++) {
            int row = i/cols;
            int col = i%cols;
            if (pixels[i]) {
                DrawRectangle(col*wStep, row*hStep, wStep, hStep, YELLOW);
            } else {
                DrawRectangle(col*wStep, row*hStep, wStep, hStep, BLACK);
            }
        }
        DrawRectangle(0, 800, screenWidth, 50, GRAY);
        DrawText(format("Generation: {}", generation).data(), 10, 825, 25, GREEN);
        ClearBackground(RAYWHITE);

        EndDrawing();

    }

    CloseWindow();

    return 0;
}
