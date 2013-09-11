//
//  Rectangle.cpp
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Rectangle.h"
#include "../OpenGL/OpenGLRenderer.h"

//Rectangle::Rectangle( float x, float y, float Perimeter );

Rectangle::Rectangle( float x, float y, float width, float height) :
    Shape(x, y),
    m_Width(width),
    m_Height(height)
{
    
}

Rectangle::Rectangle() :
    Shape(),
    m_Width(0.0f),
    m_Height(0.0f)
{
    
}

Rectangle::~Rectangle()
{
    
}

void Rectangle::paint()
{
    OpenGLRenderer::getInstance()->drawRectangle(getX(), getY(), getWidth(), getHeight());
}

float Rectangle::getWidth()
{
    return m_Width;
}

float Rectangle::getHeight()
{
    return m_Height;
}



