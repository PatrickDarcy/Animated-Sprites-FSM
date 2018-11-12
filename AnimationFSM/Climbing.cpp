#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

//void Climbing::walking(Animation * a)
//{
//	std::cout << "Climbing -> walking" << std::endl;
//	a->setCurrent(new Walking());
//	delete this;
//}
//
//void Climbing::swordsmanship(Animation * a)
//{
//	std::cout << "Climbing -> swordsmanship" << std::endl;
//	a->setCurrent(new swordsmanship());
//	delete this;
//}
//
//void Climbing::hammering(Animation * a)
//{
//	std::cout << "Climbing -> hammering" << std::endl;
//	a->setCurrent(new hammering());
//	delete this;
//}
//
//void Climbing::shoveling(Animation * a)
//{
//	std::cout << "Climbing -> shoveling" << std::endl;
//	a->setCurrent(new shoveling());
//	delete this;
//}
