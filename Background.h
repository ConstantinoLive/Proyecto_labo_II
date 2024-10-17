#pragma once
#include <SFML/Graphics.hpp>

class Background
{
public:
    Background();
    virtual ~Background();
    void update();
    sf::Sprite& getDraw();



protected:

private:
    sf::Sprite _sprite_fondo;
    sf::Texture _texture_fondo;

};

