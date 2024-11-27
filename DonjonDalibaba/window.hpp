#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include "salles.hpp"

class window {
private:
	int width;
	int height;
public:
	window(int width, int height) : width(1080), height(1920) {
		this->width = width;
		this->height = height;
	}

	void set_width(int width) {
		this->width = width;
	}

	void set_height(int height) {
		this->height = height;
	}

	int get_width() {
		return this->width;
	}

	int get_height() {
		return this->height;
	}

	void afficher() {
		sf::VideoMode fullscreenMode = sf::VideoMode::getDesktopMode();
		sf::RenderWindow window(fullscreenMode, "Fenêtre en Plein Écran", sf::Style::Fullscreen);
		sf::RectangleShape player(sf::Vector2f(32, 32));
		player.setFillColor(sf::Color::Red);
		player.setPosition(728, 308);
		while (window.isOpen())
		{
			window.clear();
			{
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();

					if (event.type == sf::Event::KeyPressed) {
						if (event.key.code == sf::Keyboard::Up) {
							
						}
						if (event.key.code == sf::Keyboard::Down) {
							
						}
					}
				}
			}
			sf::Texture background;
			if (!background.loadFromFile("C:/Users/bapti/Desktop/C++/DonjonDalibaba/texture/background.png")) {
				std::cout << "Erreur lors du chargement de la texture" << std::endl;
				break;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q)) {
				player.move(-3, 0);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
				player.move(3, 0);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z)) {
				player.move(0.0, -3);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
				player.move(0.0, 3);
			}

			sf::Sprite spritebackground;
			spritebackground.setTexture(background);
			window.draw(spritebackground);
			salles salle1(480, 480);
			salle1.afficherSalle(window);
			window.draw(player);
			window.display();
		}
	}
};