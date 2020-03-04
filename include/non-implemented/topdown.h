#include "behavior.h"
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Keyboard.hpp>

class TopDown : public Behavior{
public:
    TopDown();
    void update(sf::Keyboard keyboard, sf::Vector2f &position);
    void handlePlayerInput(sf::Keyboard keyboard, sf::Vector2f &positions);
private:
    int speed;
};