//
//  Circle.cpp
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Circle.h"
#include "../OpenGL/OpenGLRenderer.h"

//Circle::Circle( float x, float y, float radius );

Circle::Circle( float x, float y, float radius) :
    Shape(x, y ),
    m_Radius(radius)
{
    
}

Circle::Circle() :
    Shape(),
    m_Radius(0.0f)
{
    
}

Circle::~Circle()
{
    
}

void Circle::paint()
{
    OpenGLRenderer::getInstance()->drawCircle(getX(), getY(), getRadius());
}

float Circle::getRadius()
{
    return m_Radius;
}



