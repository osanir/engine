#include <SFML/System.hpp>
#include <vector>
#include <string>
#include "variable.h"

class Object{
public:
	Object();
	
	// TODO
	void setScale();
	void moveAtAngle();	
	void moveForward();
	void rotateClockwise(float degrees);
	void rotateTowardAngle(float degrees, float angle);
	void rotateTowardPosition(float degress, float x, float y);
	void setAngleTowardPosition(float x, float y);

	////// POSITION //////
	void setPositionToAnotherObject(Object &otherObject);
	void setPosition(sf::Vector2f newPosition);
	sf::Vector2f getPosition();
	void setX(float newX);
	float getX();
	void setY(float newY);
	float getY();


	////// SIZE //////
	void setSize(sf::Vector2f newSize);
	sf::Vector2f getSize();
	void setWidth(float newWidth);
	float getWidth();
	void setHeight(float newHeight);
	float getHeight();


	////// ANGLE //////
	void setAngle(float newAngle);
	float getAngle();

	////// APPEARANCE //////
	void setOpacity(int newOpacity);
	int getOpacity();
	void setVisible(bool newVisible); 
	bool getVisible();

	////// INSTANCE VARIABLES //////
	void createInstanceVariable(std::string variableName, float value);
	void createInstanceVariable(std::string variableName, std::string value);
	void createInstanceVariable(std::string variableName, bool value);

	void printVariables();
private:
	sf::Vector2f position;	
	sf::Vector2f size;
	float angle; // 0-360
	int opacity; // 0-100
	int UID;
	bool visible = true;

	std::vector<Variable> instanceVariables;
};