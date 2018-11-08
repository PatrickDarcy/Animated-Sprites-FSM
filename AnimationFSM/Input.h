#ifndef INPUT_H
#define INPUT_H
#include <SFML/Graphics.hpp>

class Input
{
public:
	Input();
	~Input();

	sf::String INPUT = "";

	void setCurrent(sf::String t_current);
	sf::String getCurrent();

private:
	sf::String m_current;
};
#endif