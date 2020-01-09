//
//  LINE.hpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef LINE_hpp
#define LINE_hpp

#include "VAR.h"
#include <stdio.h>
class LINE{     //FORM: ax+b
public:
    float a, b;
    VAR* x;

    LINE(): a(0), b(0){}                    //default Constructor
    LINE(int b) : a(0), x(0), b(b) {}       //makes an int to Constructor
    LINE(VAR& v) : a(1), x(&v), b(0) {}     //holds the x Final Resault into LINE
    ~LINE(){}
    
};
#endif /* LINE_hpp */
