#include "stdafx.h"
#include "PlayerInput.h"

PlayerInput::PlayerInput()
{
}


PlayerInput::~PlayerInput()
{
}

void PlayerInput::handleKeyBoardInput(const Uint8* keyboardState)
{
	if (keyboardState[DEFAULT_UP] || keyboardState[ALTERNATE_UP])
	{
		currentDirection = KeyboardInput::Up;
	}
	else if (keyboardState[DEFAULT_DOWN] || keyboardState[ALTERNATE_DOWN])
	{
		currentDirection = KeyboardInput::Down;
	}
	else if (keyboardState[DEFAULT_LEFT] || keyboardState[ALTERNATE_LEFT])
	{
		currentDirection = KeyboardInput::Left;
	}
	else if (keyboardState[DEFAULT_RIGHT] || keyboardState[ALTERNATE_UP])
	{
		currentDirection = KeyboardInput::Right;
	}
	// TODO: else if for falcon commands
	else
	{
		currentDirection = KeyboardInput::None;
	}
}

void PlayerInput::handleKeyMouseInput(int mouseX, int mouseY)
{
	if (SDL_BUTTON(SDL_BUTTON_LEFT))
		mouseButton = MouseInput::LeftButton;
	else if (SDL_BUTTON(SDL_BUTTON_RIGHT))
		mouseButton = MouseInput::RightButton;
	else 
		mouseButton = MouseInput::None;
}
