#include "../headers/object.h"

Object::Object(){
	setPosition(sf::Vector2f(0,0));
	setSize(sf::Vector2f(64,64));
	setAngle(0);
	setOpacity(100);
	setVisible(true);
}

void Object::moveAtAngle(){
	// TODO: Fill
}

void Object::moveForward(){
	// TODO: Fill
}


////// POSITION //////

void Object::setPositionToAnotherObject(Object& otherObject){
	this->setPosition(otherObject.getPosition());
}

void Object::setPosition(sf::Vector2f newPosition){
	position = newPosition;
}

sf::Vector2f Object::getPosition(){
	return position;
}

void Object::setX(float newX){
	position.x = newX;
}

float Object::getX(){
	return position.x;
}

void Object::setY(float newY){
	position.y = newY;
}

float Object::getY(){
	return position.y;
}

void Object::moveAtAngle(){
	// TODO: Fill
}

void Object::moveForward(){
	// TODO: Fill
}

////// SIZE //////

void Object::setSize(sf::Vector2f newSize){
	size = newSize;
}

sf::Vector2f Object::getSize(){
	return size;
}

void Object::setWidth(float newWidth){
	size.x = newWidth;
}

float Object::getWidth(){
	return size.x;
}

void Object::setHeight(float newHeight){
	size.y = newHeight;
}

float Object::getHeight(){
	return size.y;
}

void Object::setScale(){
	// TODO: Fill
}

////// ANGLE //////

void Object::setAngle(float newAngle){
	angle = newAngle;
}

float Object::getAngle(){
	return angle;
}

void Object::rotateClockwise(float degrees){
	// TODO: Fill
}

void Object::rotateTowardAngle(float degrees, float angle){
	// TODO: Fill
}

void Object::rotateTowardPosition(float degress, float x, float y){
	// TODO: Fill
}

void Object::setAngleTowardPosition(float x, float y){
	// TODO: Fill
}


////// APPEARANCE //////

void Object::setOpacity(int newOpacity){
	opacity = (newOpacity > 100) ? 100 : (newOpacity < 0) ? 0 : newOpacity;
}

int Object::getOpacity(){
	return opacity;
}

void Object::setVisible(bool newVisible){
	visible = newVisible;
}

bool Object::getVisible(){
	return visible;
}