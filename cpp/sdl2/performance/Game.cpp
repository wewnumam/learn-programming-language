#include "Game.h"

Game* Game::s_pInstance = 0;

bool Game::init(
    const char* title, int xpos, int ypos,
    int width, int height, int flags)
{
    // attempt to initialize SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cout << "SDL init fail\n";
        return false; // SDL init fail
    }
    
    std::cout << "SDL init success\n";
    
    // init the window
    m_pWindow = SDL_CreateWindow(
        title, xpos, ypos, width, height, flags);
    if(m_pWindow == 0)
    {
        std::cout << "window init fail\n";
        return false; // window init fail
    }
    
    std::cout << "window creation success\n";

    m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
    if(m_pRenderer == 0)
    {
        std::cout << "renderer init fail\n";
        return false; // renderer init fail
    }
    
    std::cout << "renderer creation success\n";
    
    SDL_SetRenderDrawColor(m_pRenderer, 255,0,0,255);
    
    m_gameObjects.push_back(
       new Player(
           new LoaderParams(
               100, 100, 128, 82, "animate", "assets/horse.png")));
    
    m_gameObjects.push_back(
        new Enemy(
            new LoaderParams(
                300, 300, 128, 82, "animate", "assets/horse.png")));

    std::cout << "init success\n";
    
    m_bRunning = true; 

    return true;
}

void Game::render()
{
    SDL_RenderClear(m_pRenderer);

    for(
        std::vector<GameObject*>::size_type i = 0;
        i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->draw();
    }

    SDL_RenderPresent(m_pRenderer);
}

void Game::update()
{
    for(
        std::vector<GameObject*>::size_type i = 0; 
        i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->update();
    }
}

void Game::handleEvents()
{
    SDL_Event event;
    if(SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                m_bRunning = false;
                break;
                
            default:
                break;
        }
    }
}

void Game::clean()
{
    std::cout << "cleaning game\n";
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
}
