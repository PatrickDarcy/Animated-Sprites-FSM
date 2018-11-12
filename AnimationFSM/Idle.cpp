#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walking(Animation * a)
{
}

void Idle::swordsmanship(Animation * a)
{
}

void Idle::hammering(Animation * a)
{
}

void Idle::shoveling(Animation * a)
{
}
