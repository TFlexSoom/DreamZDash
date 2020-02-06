#pragma

/*
 * Tristan Hilbert
 * 2/4/2020
 * DreamZWindow Facade Module for allowing insertion of lambda per events
 *
 */

#ifndef DREAMZDASH_DREAM_Z_WINDOW_HPP
#define DREAMZDASH_DREAM_Z_WINDOW_HPP

#include <functional>
#include <SFML/Graphics.hpp>

namespace dzdash{
class Window : public sf::RenderWindow{
    private:
        std::function<void()> lambdaCreate;
        std::function<void()> lambdaResize;

    public:
        Window();
        Window(
            sf::VideoMode,
            const sf::String&,
            sf::Uint32 style = sf::Style::Default,
            const sf::ContextSettings& settings= sf::ContextSettings()
        );
        virtual ~Window();
        /*virtual void setOnCreate(const std::function&);
        virtual void setOnResize(const std::function&);
        virtual void onCreate();
        virtual void onResize();*/

};

};


#endif /* end of include guard: DREAMZDASH_DREAM_Z_WINDOW */
