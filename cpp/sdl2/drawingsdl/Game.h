#ifndef __Game__
#define __Game__

#include <SDL2/SDL.h>
#include <iostream>

class Game
{
    private:
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;

        SDL_Texture* m_pTexture; 
        SDL_Rect m_sourceRectangle;
        SDL_Rect m_destinationRectangle; 
        
        bool m_bRunning;

    public:
        Game() {}
        ~Game() {}
        
        bool init(
            const char* title, int xpos, int ypos,
            int width, int height, int flags);

        void render();
        void update() {}
        void handleEvents();
        void clean();
        
        // a function to access the private running variable
        bool running() { return m_bRunning; }
};

#endif