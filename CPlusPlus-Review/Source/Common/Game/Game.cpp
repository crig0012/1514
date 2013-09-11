#include "Game.h"
#include "../OpenGL/OpenGL.h"
#include "../Constants/Constants.h"
#include "../Utils/Utils.h"
#include "../Screen Manager/ScreenManager.h"
#include "Circle.h"
#include "Rectangle.h"


Game::Game() :    m_Circle(NULL), m_Rectangle(NULL)
{
    //Create a new Circle object
    m_Circle = new Circle( 100.0f, 100.0f, 25.0f );
    
    //Create a new Rectangle object
    m_Rectangle = new Rectangle( 10.0f, 10.0f, 25.0f, 10.0f);
}

Game::~Game()
{
    if(m_Circle != NULL)
    {
        delete m_Circle;
        m_Circle = NULL;
    }
    
    if(m_Rectangle != NULL)
    {
        delete m_Rectangle;
        m_Rectangle = NULL;
    }
}

void Game::update(double delta)
{
    //Process game logic here
}

void Game::paint()
{
    //Draw Game data here
    m_Circle->paint();
    m_Rectangle->paint();
}

void Game::reset()
{
    //Reset all game data here
}

const char* Game::getName()
{
	return GAME_SCREEN_NAME;
}

void Game::mouseMovementEvent(float deltaX, float deltaY, float positionX, float positionY)
{
    //Handle mouse movement events here
}

void Game::mouseLeftClickDownEvent(float positionX, float positionY)
{
    //Handle mouse left click down events here
}

void Game::mouseRightClickDownEvent(float positionX, float positionY)
{
    //Handle mouse right click down events here
}

void Game::mouseLeftClickUpEvent(float positionX, float positionY)
{
    //Handle mouse left click up events here
}

void Game::mouseRightClickUpEvent(float positionX, float positionY)
{
    //Handle mouse right click up events here
}

void Game::keyDownEvent(int keyCode)
{
    //Handle keyboard down events here
}

void Game::keyUpEvent(int keyCode)
{
    //Handle keyboard up events here
}
