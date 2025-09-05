#pragma once

//class Game;

class Player
{
public:
	Player();
	void Update(float deltaTime);

	Surface* surface;

private:
	//Game* game;
	Sprite* playerSprite;

	float playerSpeed;
	float playerX, playerY;
};