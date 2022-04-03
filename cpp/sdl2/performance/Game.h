#ifndef __Game__
#define __Game__

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"

class Game
{

    private:
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;
        int m_currentFrame;
        bool m_bRunning;

        std::vector<GameObject*> m_gameObjects;
        
        Game() {}
        static Game* s_pInstance;

    public:
        static Game* Instance()
        {
            if(s_pInstance == 0)
            {
                s_pInstance = new Game();
                return s_pInstance;
            }

            return s_pInstance;
        }

        ~Game() {}
        
        SDL_Renderer* getRenderer() const { return m_pRenderer; }

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