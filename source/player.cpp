#include "precomp.h"
#include "player.h"
#include <iostream>

Player::Player()
	: playerSpeed(0.1f),
	  playerX(50),
	  playerY(100)
{
	playerSprite = new Sprite(new Surface("assets/BombermanGuy.png"), 1);
}

void Player::Update(float deltaTime)
{
	surface->Clear(0xBDBEBD);

	if (GetAsyncKeyState(87) & 0x08000)
	{
		playerY -= playerSpeed * deltaTime;
		std::cout << "Moving Up" << std::endl;
	}

	if (GetAsyncKeyState(83) & 0x08000)
	{
		playerY += playerSpeed * deltaTime;
		std::cout << "Moving Down" << std::endl;
	}

	if (GetAsyncKeyState(65) & 0x08000)
	{
		playerX -= playerSpeed * deltaTime;
		std::cout << "Moving Left" << std::endl;
	}

	if (GetAsyncKeyState(68) & 0x08000)
	{
		playerX += playerSpeed * deltaTime;
		std::cout << "Moving Right" << std::endl;
	}

	playerSprite->Draw(surface, playerX, playerY);
}
