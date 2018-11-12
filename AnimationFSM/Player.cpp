#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{

	m_animated_sprite.setTextureRect(m_animated_sprite.getCurrentFrame());
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	if (input.getCurrent() == "IDLE")
	{
		m_animation.idle();
	}
	else if (input.getCurrent() == "UP")
	{
		m_animation.climbing();
	}
	else if (input.getCurrent() == "LEFT")
	{
		m_animation.jumping();
	}
	else if(input.getCurrent() == "RIGHT")
	{
		m_animation.jumping();
	}
	else
	{
		m_animation.idle();
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}