#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({400, 300}), "Name and Surname");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({60, 3});
    shape1.setRotation(90);
    shape1.setPosition({70, 70});
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({30, 3});
    shape2.setRotation(45);
    shape2.setPosition({70, 70});
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({30, 3});
    shape3.setRotation(-45);
    shape3.setPosition({89, 91});
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({60, 3});
    shape4.setRotation(90);
    shape4.setPosition({114, 70});
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({60, 3});
    shape5.setRotation(90);
    shape5.setPosition({130, 70});
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({30, 3});
    shape6.setRotation(35);
    shape6.setPosition({130, 70});
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({30, 3});
    shape7.setRotation(-35);
    shape7.setPosition({128, 128});
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({25, 3});
    shape8.setRotation(90);
    shape8.setPosition({155, 88});
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({30, 3});
    shape9.setRotation(90);
    shape9.setPosition({170, 70});
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({30, 3});
    shape10.setPosition({170, 70});
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({32, 3});
    shape11.setPosition({167, 100});
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({30, 3});
    shape12.setRotation(90);
    shape12.setPosition({200, 100});
    window.draw(shape12);

    sf::RectangleShape shape13;
    shape13.setSize({32, 3});
    shape13.setPosition({167, 130});
    window.draw(shape13);

    window.display();

    sf::sleep(sf::seconds(5));
}