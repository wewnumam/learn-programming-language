#ifndef __TextureManager__
#define __TextureManager__

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <map>

class TextureManager
{
    private:
        std::map<std::string, SDL_Texture*> m_textureMap;
        TextureManager() {}
    
    public:
        static TextureManager* s_pInstance;

        static TextureManager* Instance()
        {
            if(s_pInstance == 0)
            {
                s_pInstance = new TextureManager();
                return s_pInstance;
            }

            return s_pInstance;
        }
        
        ~TextureManager() {}

        bool load(
            std::string fileName,std::string id, SDL_Renderer* pRenderer);
        void draw(
            std::string id, int x, int y,
            int width, int height, 
            SDL_Renderer* pRenderer,
            SDL_RendererFlip flip = SDL_FLIP_NONE);
        void drawFrame(
            std::string id, int x, int y,
            int width, int height,
            int currentRow, int currentFrame,
            SDL_Renderer* pRenderer,
            SDL_RendererFlip flip = SDL_FLIP_NONE);
};

#endif