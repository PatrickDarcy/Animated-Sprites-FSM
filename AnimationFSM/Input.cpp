#include <Input.h>

Input::Input() 
{
	m_current = "IDLE";
}
Input::~Input() {}

void Input::setCurrent(sf::String a) {
	m_current = a;
}

sf::String Input::getCurrent()
{
	return m_current;
}


