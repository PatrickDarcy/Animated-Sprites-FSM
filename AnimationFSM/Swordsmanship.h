#ifndef SWORDSMANSHIP_H
#define SWORDSMANSHIP_H

#include "State.h"

class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);
	void climbing(Animation* a);

};

#endif // !SWORDSMANSHIP_H