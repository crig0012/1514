//
//  Rectangle.h
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Rectangle__
#define __GAM_1514_OSX_Game__Rectangle__

#include "Shape.h"

class Rectangle : Shape
{
public:
    Rectangle( float x, float y, float width, float height );
    Rectangle();
    ~Rectangle();
    
    void paint();

    float getWidth();
    float getHeight();

private:
    float m_Width;
    float m_Height;
};
#endif /* defined(__GAM_1514_OSX_Game__Rectangle__) */
