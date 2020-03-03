#include <SFML/Graphics.hpp>
#include "object.h"

class Sprite : public Object{
public:
    Sprite();
    void update();
private:
    //sf::Texture texture;
    sf::RectangleShape collision;
};