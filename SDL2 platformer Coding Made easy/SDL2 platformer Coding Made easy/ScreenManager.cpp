#include "ScreenManager.h"

ScreenManager::ScreenManager()
{
}


ScreenManager::~ScreenManager()
{
}

ScreenManager &ScreenManager::GetInstance()
{
	static ScreenManager instance;
	return instance;
}

void ScreenManager::Initialize(SDL_Renderer *renderer)
{
	currentScreen = new SplashScreen();
	transition = false;

	fade.LoadContent(renderer);
}

void ScreenManager::LoadContent(SDL_Renderer *renderer)
{
	currentScreen->LoadContent(renderer);
}

void ScreenManager::Update(SDL_Renderer *renderer, SDL_Event &event)
{
		currentScreen->Update(renderer, event);	
}

void ScreenManager::Draw(SDL_Renderer *renderer)
{
	currentScreen->Draw(renderer);
}

void ScreenManager::AddScreen(GameScreen *screen, SDL_Renderer *renderer)
{
	currentScreen->UnloadContent();
	delete currentScreen;
	currentScreen = screen;
	currentScreen->LoadContent(renderer);

}

void ScreenManager::Transition(SDL_Renderer *renderer)
{
}

Uint8 ScreenManager::GetAlpha()
{
	return fade.getAlpha();
}

void ScreenManager::UnloadContent()
{

}

Texture ScreenManager::GetSplashText()
{
	return SplashText;
}
Texture ScreenManager::GetTitleText()
{
	return TitleText;
}