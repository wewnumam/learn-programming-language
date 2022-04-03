#ifndef __Player__
#define __Player__

#include "GameObject.h"

class Player : public GameObject
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