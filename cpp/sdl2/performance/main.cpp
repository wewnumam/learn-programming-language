#include "Game.h"

int main(int argc, char* argv[])
{
    if (!Game::Instance()->init("Chapter 3", 100, 100, 640, 480, 0))
    {
        std::cout << "game init failure - ";
        std::cout << SDL_GetError() << std::endl;
        return -1;
    }
    
    while(Game::Instance()->running())
    {
        Game::Instance()->handleEvents();
        Game::Instance()->update();
        Game::Instance()->render();

        SDL_Delay(10);
    }
    
    Game::Instance()->clean();

    return 0;
}