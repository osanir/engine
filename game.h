#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "object.h"

using namespace sf;

class Game{
public:
	Game();
	void run();
	void processEvents();
	void update();
	void render();
	Object myObject;
private:
	RenderWindow window;
};