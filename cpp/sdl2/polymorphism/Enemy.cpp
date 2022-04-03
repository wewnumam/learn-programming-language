#include "Enemy.h"

void Enemy::load(
    int x, int y, int width, int height, 
    std::string textureID, std::string fileName, 
    SDL_Renderer* pRenderer)
{
    GameObject::load(x, y, width, height, textureID, fileName, pRenderer);
}

void Enemy::draw(SDL_Renderer* pRenderer)
{
    GameObject::draw(pRenderer);
}

void Enemy::update()
{
    m_x += 1;
    m_x += 1;
    m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}