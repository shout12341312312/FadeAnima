#include "FadeAnimation.h"

FadeAnimation::FadeAnimation()
{

}

FadeAnimation::~FadeAnimation()
{

}

void FadeAnimation::LoadContent(SDL_Renderer *renderer)
{
	increase = false;
	fadeSpeed = 0.001f;
}

void FadeAnimation::UnloadContent()
{

}

void FadeAnimation::Draw(SDL_Renderer *renderer)
{

}

void FadeAnimation::Update()
{
	if (active)
	{
		if (!increase)
		{
			alpha -= fadeSpeed;
		}
		else
		{
			alpha += fadeSpeed;
		}

		if (alpha >= 1.0f)
		{
			alpha = 1.0f;
			increase = false;
		}
		else if (alpha <= 1.0f)
		{
			alpha = 0.0f;
			increase = true;
		}
	}
	else
	{
		alpha = 1.0f;
	}
}

void FadeAnimation::SetAlpha(Uint8 alpha)
{
	alpha = alpha;
	if (alpha = 0.0f)
	{
		increase = true;
	}
	else
	{
		increase = false;
	}
}