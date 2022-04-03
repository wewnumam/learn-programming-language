#include "Player.h"

void Player::load(
    int x, int y, int width, int height, 
    std::string textureID, std::string fileName, 
    SDL_Renderer* pRenderer)
{
    GameObject::load(x, y, width, height, textureID, fileName, pRenderer);
}

void Player::draw(SDL_Renderer* pRenderer)
{
    GameObject::draw(pRenderer);
}

void Player::update()
{
    m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
    m_x -= 1;
}