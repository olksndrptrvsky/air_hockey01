#include "App.h"


#include <iomanip>	////////

void App::onEvent(SDL_Event* e)
{
	switch (e->type)
	{
	case SDL_QUIT: running = false; break;

	case SDL_MOUSEMOTION:
	{	
		int x, y;
		SDL_GetMouseState(&x, &y);
		
		std::cout.setf(std::ios::left);

		game_manager.setPlayerMalletCoordinates(x, y);

		//std::cout << std::setw(5) << x << std::setw(5) << y << std::setw(5) << game_manager.getPuck()->getVx() << game_manager.getPuck()->getVy() << std::endl;

	}
		default:
			break;
	}
}