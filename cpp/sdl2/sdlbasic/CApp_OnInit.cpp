#include "CApp.h"
 
bool CApp::OnInit() 
{
    SDL_Window* window;
    SDL_Renderer* renderer;

    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return false;
 
    window = SDL_CreateWindow(
        "Game Window", 
        SDL_WINDOWPOS_UNDEFINED, 
        SDL_WINDOWPOS_UNDEFINED, 
        640, 
        480, 
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

    if (window == NULL)
        return false;
    
    renderer = SDL_CreateRenderer(window, -1, 0);
 
    return true;
}