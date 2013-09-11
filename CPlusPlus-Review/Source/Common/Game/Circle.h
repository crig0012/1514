//
//  Circle.h
//  GAM-1514 OSX Game
//
//  Created by Joel Cright on 2013-09-11.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Circle__
#define __GAM_1514_OSX_Game__Circle__

#include "Shape.h"

class Circle : Shape
{
public:
    Circle( float x, float y, float radius );
    Circle();
    ~Circle();
    
    void paint();
    
    float getRadius();
    
private:
    float m_Radius;
};

#endif /* defined(__GAM_1514_OSX_Game__Circle__) */
