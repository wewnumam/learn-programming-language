#ifndef __Game__
#define __Game__

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"

class Game
{
    private:
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;

        GameObject m_go;
        Player m_player;

        int m_currentFrame;
        bool m_bRunning;

    public:
        Game() {}
        ~Game() {}
        
        bool init(
            const char* title, int xpos, int ypos,
            int width, int height, int flags);

        void render();
        void update();
        void handleEvents();
        void clean();
        
        // a function to access the private running variable
        bool running() { return m_bRunning; }
};

#endif