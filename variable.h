#include <string>

class Variable{
public:
	Variable(std::string pName);
	virtual void setValue();
	std::string name;
	std::string description;
};

class VariableNumber : public Variable{
public:
	float value;

	VariableNumber(std::string pName, float pValue);
	void setValue(float newValue){ value = newValue; }
	float getValue(){return value;}
};

class VariableString : public Variable{
public:
	std::string value;
	
	VariableString(std::string pName, std::string pValue);
	void setValue(std::string newValue){ value = newValue; }
	std::string getValue(){return value;}
};

class VariableBoolean : public Variable{
public:
	bool value;

	VariableBoolean(std::string pName, bool pValue);
	void setValue(bool newValue){ value = newValue; }
	bool getValue(){return value;}
};
