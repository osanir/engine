#include "../include/sprite.h"

Sprite::Sprite() : Object(){
    collision.setSize(this->getSize());
    collision.setFillColor(sf::Color::Black);
    collision.setPosition(this->getPosition());
}

void Sprite::update(){
    collision.setPosition(this->getPosition());
}