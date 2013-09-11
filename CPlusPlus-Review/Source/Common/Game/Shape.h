//
//  Shape.h
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Shape__
#define __GAM_1514_OSX_Game__Shape__

#include <iostream>

class Shape
{
public:
    Shape( float x, float y );
    Shape();
    virtual ~Shape();
    
    virtual void paint() = 0;
    
    float getX();
    float getY();
    
private:
    float m_X;
    float m_Y;
};

#endif /* defined(__GAM_1514_OSX_Game__Shape__) */

