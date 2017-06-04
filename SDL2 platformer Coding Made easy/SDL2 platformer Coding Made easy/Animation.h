#pragma once
#include "Texture.h"
#include "header.h"

class Animation
{
public:
	Animation();
	~Animation();

	virtual void LoadContent(SDL_Renderer *renderer);
	virtual void UnloadContent();
	virtual void Draw(SDL_Renderer *renderer);
	virtual void Update();
	virtual void SetActive(bool value);
	virtual void SetAlpha(Uint8 alpha);

	Uint8 getAlpha();

protected:

	Uint8 alpha;

	bool active;

private:
};