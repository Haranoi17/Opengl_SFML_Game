#include <Game.hpp>
#include <GL/freeglut.h>

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
    
    Game game;
    game.loop();   
}