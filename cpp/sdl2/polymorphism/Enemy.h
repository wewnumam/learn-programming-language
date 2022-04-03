#ifndef __Enemy__
#define __Enemy__

#include "GameObject.h"

class Enemy : public GameObject
{
    public:
        void load(
            int x, int y, int width, int height, 
            std::string textureID, std::string fileName, 
            SDL_Renderer* pRenderer);
        void draw(SDL_Renderer* pRenderer);
        void update();
        void clean();
};

#endif