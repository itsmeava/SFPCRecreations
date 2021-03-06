//
//  wave.hpp
//  whitneyRecreation3
//
//  Created by Ann Kidder on 9/27/17.
//
//

#ifndef wave_hpp
#define wave_hpp

#include <stdio.h>
#include "ofMain.h"

class Wave {
    public:
    
    void setup();
    void update();
    void draw();
    
    float xStart;
    float yStart;
    float xUpdate;
    float yUpdate;
    
    float time;
    
    Wave();
};
#endif /* wave_hpp */
