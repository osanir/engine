#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "object.h"
#include "sprite.h"

class Game{
public:
	Game();
	void run();
	void processEvents();
	void update();
	void render();
	Sprite mySprite;
private:
	sf::RenderWindow window;
};