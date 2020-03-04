#include "../include/topdown.h"

TopDown::TopDown() : Behavior(){
    speed = 2;
}

void TopDown::update(sf::Keyboard keyboard, sf::Vector2f &position){
    handlePlayerInput(keyboard, position);
}

void TopDown::handlePlayerInput(sf::Keyboard keyboard, sf::Vector2f &position){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        position.x += speed;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        position.x -= speed;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        position.y -= speed;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        position.y += speed;
    }
}