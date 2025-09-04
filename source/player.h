#pragma once

//class Game;

class Player
{
public:
	Player();
	void Update();

	Surface* surface;

private:
	//Game* game;
	Sprite* playerSprite;

	int playerSpeed;
	float playerX, playerY;
};