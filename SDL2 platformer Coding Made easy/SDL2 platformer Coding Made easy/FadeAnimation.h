#pragma once
#include "Animation.h"
class FadeAnimation : public Animation
{
public:
	FadeAnimation();
	~FadeAnimation();

	void LoadContent(SDL_Renderer *renderer);
	void UnloadContent();
	void Draw(SDL_Renderer *renderer);
	void Update();
	void SetAlpha(Uint8 alpha);

private:

	bool increase;
	Uint8 fadeSpeed;
};