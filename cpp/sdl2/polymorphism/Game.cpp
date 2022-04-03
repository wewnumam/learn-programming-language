#include "Game.h"

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
    
    m_go = new GameObject();
    m_player = new Player();
    m_enemy = new Enemy();

    m_go->load(
        100, 100, 128, 128, "animate1", "assets/horse.png", m_pRenderer);
    m_player->load(
        300, 300, 128, 128, "animate2", "assets/horse.png", m_pRenderer);
    m_enemy->load(
        0, 0, 128, 128, "animate3", "assets/horse.png", m_pRenderer);
    
    m_gameObjects.push_back(m_go);
    m_gameObjects.push_back(m_player);
    m_gameObjects.push_back(m_enemy);

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
        m_gameObjects[i]->draw(m_pRenderer);
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
