//
//  Shape.cpp
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Shape.h"


Shape::Shape( float x, float y ) :
    m_X(x),
    m_Y(y)
{
    
}

Shape::Shape() :
m_X( 0.0f),
m_Y(0.0f)
{
    
}

Shape::~Shape()
{

}

float Shape::getX()
{
    return m_X;
}

float Shape::getY()
{
    return m_Y;
}

