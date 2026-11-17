#include <raylib.h>

int main() {

  const float gravity = 9.8;
  const int screenWidth = 800;
  const int screenHeight = 670;

  InitWindow(screenWidth, screenHeight, "Jooj");

  Vector2 ballPosition = {(float)screenWidth / 2, (float)screenHeight / 2};

  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    ballPosition.y += gravity / 6;
    if (IsKeyDown(KEY_D))
      ballPosition.x += 2.0f;
    if (IsKeyDown(KEY_A))
      ballPosition.x -= 2.0f;
    if (IsKeyDown(KEY_W))
      ballPosition.y -= 2.0f;
    if (IsKeyDown(KEY_S))
      ballPosition.y += 2.0f;

    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawCircleV(ballPosition, 50, BLUE);

    DrawText("move the ball with WASD keys", 10, 10, 20, GOLD);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
