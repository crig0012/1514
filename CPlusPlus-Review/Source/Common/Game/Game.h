#ifndef GAME_H
#define GAME_H

#include "../Screen Manager/Screen.h"
#include <vector>
//Forward declarations
class Circle;
class Rectangle;

//This is the Game class, add game objects and any
//game logic here. Inherits from Screen and must
//implement update(), paint() and getName()
class Game : public Screen
{
public:
    Game();
    ~Game();
    
    //Game lifecycle methods, inherited from Screen
    void update(double delta);
    void paint();
    void reset();
    
    //Returns the screen name, must be implemented,
    //it's a pure virtual method in the Screen class
    const char* getName();
    
private:
    //Mouse event methods, inherited from Screen
    virtual void mouseMovementEvent(float deltaX, float deltaY, float positionX, float positionY);
    virtual void mouseLeftClickDownEvent(float positionX, float positionY);
    virtual void mouseRightClickDownEvent(float positionX, float positionY);
    virtual void mouseLeftClickUpEvent(float positionX, float positionY);
    virtual void mouseRightClickUpEvent(float positionX, float positionY);
    
    //Key up and down event methods, inherited from Screen
    virtual void keyDownEvent(int keyCode);
    virtual void keyUpEvent(int keyCode);
    
    //Member variables
    Circle* m_Circle;
    Rectangle* m_Rectangle;
};

#endif