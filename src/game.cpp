#include "../include/game.h"

Game::Game() : window(sf::VideoMode(854,480), "Engine"){

}

void Game::run(){
	while(window.isOpen()){
		processEvents();
		update();
		render();
	}
}

void Game::processEvents(){
	sf::Event event;
	while(window.pollEvent(event)){
		// Window close
		switch (event.type){
            case sf::Event::Closed:
                window.close();
                break;
            default:
                break;
        }
		if(event.key.code == sf::Keyboard::Space){

		}
	}
}

void Game::update(){
	
}

void Game::render(){
	window.clear();
	//window.draw();
	window.display();
}