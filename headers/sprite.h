#include <SFML/Graphics/Texture.hpp>
#include "object.h"

class Sprite : public Object{
public:
    Sprite();
private:
    sf::Texture texture;
};