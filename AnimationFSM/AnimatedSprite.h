#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include <vector>
#include <Debug.h>

using namespace std;
using namespace sf;

class AnimatedSprite : public Sprite {
public:
	AnimatedSprite();
	AnimatedSprite(const Texture&);
	AnimatedSprite(const Texture&, const IntRect&);
	~AnimatedSprite();

	const Clock& getClock();
	const Time& getTime();
	const vector<IntRect>& getFrames();
	const IntRect& getFrame(int);
	void addFrame(IntRect&);
	const IntRect getCurrentFrame();
	void update();
	void setCurrentFrame();
	void setCurrentRow(int t_row);
	
private:
	Clock m_clock;
	Time m_time;
	vector<IntRect> m_frames;
	IntRect m_current_frame;
	int m_current_frame_row;
	int m_current_frame_col;
};

#endif // !ANIMATED_SPRITE_H
