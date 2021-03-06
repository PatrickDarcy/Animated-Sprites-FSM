#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void swordsmanship(Animation* a);
	void hammering(Animation* a);
	void shoveling(Animation* a);
};

#endif // !IDLE_H