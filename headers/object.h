#include <SFML/System.hpp>
#include <vector>
#include <string>

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

private:
	sf::Vector2f position;	
	sf::Vector2f size;
	float angle; // 0-360
	int opacity; // 0-100
	bool visible = true;
	//int UID;
};