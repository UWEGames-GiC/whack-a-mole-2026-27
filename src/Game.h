
#ifndef WHACKAMOLESFML_GAME_H
#define WHACKAMOLESFML_GAME_H

#include <SFML/Graphics.hpp>

class Game
{
	public:
	Game(sf::RenderWindow& window);
	~Game();
	bool init();
	void update(float dt);
	void render();
	void mouseClicked(sf::Event event);
	void keyPressed(sf::Event::KeyPressed keypressevent);

	private:
	bool collisionCheck(sf::Vector2i click, sf::Sprite sprite);
	void spawn();

	sf::RenderWindow& window;

	//Define variables here e.g. Texture and Sprite variables
	sf::Texture background_texture{"../Data/Images/background.png"};
	sf::Sprite background{background_texture};
	sf::Texture bird_texture{"../Data/Images/Bird.png"};
	sf::Sprite bird{bird_texture};

	sf::Font font{"../Data/Fonts/OpenSans-Bold.ttf"};

	bool in_menu;
	sf::Text menu_text {font, "Please select an option: "};


	bool play_selected = true;

	bool reverse = false;
	float speed = 200;

	int score = 0;

};

#endif // WHACKAMOLESFML_GAME_H
