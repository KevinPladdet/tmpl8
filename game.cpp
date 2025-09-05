// Template, 2024 IGAD Edition
// Get the latest version from: https://github.com/jbikker/tmpl8
// IGAD/NHTV/BUAS/UU - Jacco Bikker - 2006-2024

#include "precomp.h"
#include "game.h"
#include "player.h"
#include "map.h"
#include <iostream>

void Game::Init()
{
	r_player = new Player();
	r_player->surface = screen;
}

void Game::Tick( float deltaTime )
{
	r_player->Update(deltaTime);
}