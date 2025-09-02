#include "precomp.h"
#include "player.h"

player::player()
	: playerSprite(new Surface("assets/BombermanGuy.png"), 16)
{
	
}

void player::LoadSprite()
{
	//playerSprite.Draw(screen, 0, 0);

	std::cout << "Test" << std::endl;
}

void player::MovePlayer()
{
	
}