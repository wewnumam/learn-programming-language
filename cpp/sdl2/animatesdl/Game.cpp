#include "Game.h"

// our Game object
Game* g_game = 0;

int main(int argc, char* argv[])
{
    g_game = new Game();
    g_game->init("Chapter 2", 100, 100, 640, 480, 0);

    while(g_game->running())
    {
        g_game->handleEvents();
        g_game->update();
        g_game->render();
    }
    
    g_game->clean();

    return 0;
}

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
    
    SDL_SetRenderDrawColor(m_pRenderer, 255,255,255,255);
    SDL_Surface* pTempSurface = SDL_LoadBMP("assets/horse.bmp");
    m_pTexture = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurface);
    SDL_FreeSurface(pTempSurface);
    SDL_QueryTexture(
        m_pTexture, NULL, NULL,&m_sourceRectangle.w, &m_sourceRectangle.h);
    m_destinationRectangle.x = m_sourceRectangle.x = 0;
    m_destinationRectangle.y = m_sourceRectangle.y = 0;
    m_destinationRectangle.w = m_sourceRectangle.w = 128;
    m_destinationRectangle.h = m_sourceRectangle.h = 128;

    std::cout << "init success\n";
    
    // everything inited successfully, start the main loop
    m_bRunning = true; 

    return true;
}

void Game::render()
{
    SDL_RenderClear(m_pRenderer); // clear the renderer to the draw color
    SDL_RenderCopy(
        m_pRenderer, m_pTexture,
        &m_sourceRectangle, &m_destinationRectangle);
    SDL_RenderPresent(m_pRenderer); // draw to the screen
}

void Game::update()
{
    m_sourceRectangle.x = 128 * int(((SDL_GetTicks() / 100) % 6));
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
