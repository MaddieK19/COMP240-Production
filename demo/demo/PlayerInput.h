#pragma once

//! Class for handling player input.
/*!
Class for ....
*/
class PlayerInput
{
public:
	//! Constructor
	PlayerInput();
	//! Destructor
	~PlayerInput();

	//! Possible character directions / valid play input
	enum class KeyboardInput { Up, Down, Left, Right, None };
	//! Possible mouse inputs
	enum class MouseInput { LeftButton, RightButton, None };

	//! The direction the chatacter is currently moving in
	KeyboardInput currentDirection;
	//! If any mouse buttons have been pressed
	MouseInput mouseButton;

	//! Check the keyboard state to see if a valid key has been pressed
	void handleKeyBoardInput(const Uint8* keyboardState);

	//! Check the mouse state to see where the mosue is and if a button has been pressed
	void handleKeyMouseInput(int mouseX, int mouseY);

private:
	//! Default up key
	SDL_Scancode DEFAULT_UP = SDL_SCANCODE_W;
	//! Default down key
	SDL_Scancode DEFAULT_DOWN = SDL_SCANCODE_S;
	//! Default left key
	SDL_Scancode DEFAULT_LEFT = SDL_SCANCODE_A;
	//! Default right key
	SDL_Scancode DEFAULT_RIGHT = SDL_SCANCODE_D;

	//! Alternate Up key
	SDL_Scancode ALTERNATE_UP = SDL_SCANCODE_UP;
	//! Alternate down key
	SDL_Scancode ALTERNATE_DOWN = SDL_SCANCODE_DOWN;
	//! Alternate left key
	SDL_Scancode ALTERNATE_LEFT = SDL_SCANCODE_LEFT;
	//! Alternate right key
	SDL_Scancode ALTERNATE_RIGHT = SDL_SCANCODE_RIGHT;
};


