#pragma once
#include "iostream"

class player
{
public:
	player();
	void LoadSprite();
	void MovePlayer();

private:
	Sprite playerSprite;
};