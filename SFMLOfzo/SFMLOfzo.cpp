// SFMLOfzo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>


int main() {

    sf::RenderWindow window(sf::VideoMode(1000, 600), "PIEMEL FUTA DIH");

    sf::RectangleShape cube(sf::Vector2f(200.f, 550.f));
    cube.setFillColor(sf::Color::Magenta);
    cube.setPosition(350.f, 50.f);

    sf::CircleShape circle(150.f, 100.f);
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(200.f, 450.f);

    sf::CircleShape circle1(150.f);
    circle1.setFillColor(sf::Color::Blue);
    circle1.setPosition(400.f, 450.f);

    sf::CircleShape circle2(50.f);
    circle2.setFillColor(sf::Color::White);
    circle2.setPosition(375.f, -50.f);

    sf::CircleShape circle3(110.f);
    circle3.setFillColor(sf::Color::Magenta);
    circle3.setPosition(340.f, -50.f);

    sf::RectangleShape cube1(sf::Vector2f(20.f, 75.f));
    cube1.setFillColor(sf::Color::White);
    cube1.setPosition(400.f, 25.f);
    

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cube);
        window.draw(circle);
        window.draw(circle1);
        window.draw(circle3);
        window.draw(cube1);
        window.draw(circle2);
        window.display();
    }

    return 0;
}
