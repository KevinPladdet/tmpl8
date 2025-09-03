#include "precomp.h"
#include "player.h"
#include <iostream>

Player::Player()
{
	playerSprite = new Sprite(new Surface("assets/BombermanGuy.png"), 1);
}

void Player::Update()
{
	playerSprite->Draw(surface, 50, 100);

	if (GetAsyncKeyState(87) & 0x0800)
	{
		std::cout << "Moving Upwards" << std::endl;
	}
}
