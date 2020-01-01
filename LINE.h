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
class LINE{
public:
    
    float a, b;
    VAR* x;

    LINE(){}
    LINE(int b) : a(0), x(0), b(b) {}
    LINE(VAR& v) : a(1), x(&v), b(0) {}
    ~LINE(){}
    
};
#endif /* LINE_hpp */
