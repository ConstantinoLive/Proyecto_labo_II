#pragma once
#include <SFML/Graphics.hpp>
#include "Hero_1.h"
#include "Mago.h"
#include "Background.h"
#include "Shots.h"


class Game_play
{
public:
    Game_play(sf::RenderWindow& window);
    virtual ~Game_play();
    void draw(sf::RenderWindow& window);
    void cmd();
    void update(sf::RenderTarget& window);
    sf::Vector2f get_camera_position();
    void setLavel(bool I, bool II);
    bool getLavel_I() { return lavel_I; };
    bool getLavel_II() { return lavel_II; };

private:
    enum STATES_GAME_PLAY
    {
        ACTION,
        PAUSE
    };
    STATES_GAME_PLAY _states;
    Hero_1 Hro;
    Background BG;
    Mago Villano_1;
    Shots* shootig;

    // Agregar el reloj para movimiento random de villanos
    sf::Clock clock;

    bool lavel_I = true;
    bool lavel_II = false;


};


