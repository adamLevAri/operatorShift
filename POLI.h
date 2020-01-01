//
//  POLI.hpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef POLI_hpp
#define POLI_hpp

#include <stdio.h>
#include "VAR.h"

class POLI{
public:
    
    float a,b,c;
    int e;
    VAR* x;
    
    POLI(){}
    POLI(float a, int e) : a(a) {}
    ~POLI(){}
    
};
#endif /* POLI_hpp */
