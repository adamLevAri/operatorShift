//
//  operatorShift.hpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef operatorShift_hpp
#define operatorShift_hpp

#include <stdio.h>
#include <iostream>
#include "LINE.h"
#include "POLI.h"
#include "math.h"

using namespace std;
    
POLI operator ^ (LINE A, int e){
    POLI R;
    R.a = A.a;
    R.c = A.b;
    R.e = e;
    R.x = A.x;
    return R;
}

LINE operator + (LINE A, LINE B){
    LINE R;
    R.b = A.b + B.b;
    R.a = A.a + B.a;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    return R;
}

POLI operator + (POLI A, LINE B){
    POLI R;
    R.a = A.a;
    R.b = A.b + B.a;
    R.c = A.c + B.b;
    R.x = A.x;
    R.e = A.e;
    return R;
}

LINE operator - (LINE A, LINE B){//same as +
    LINE R;
    R.b = A.b - B.b;
    R.a = A.a - B.a;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    return R;
}

POLI operator - (POLI A, LINE B){
    POLI R;
    R.a = A.a;
    R.b = A.b - B.a;
    R.c = A.c - B.b;
    R.e = A.e;
    R.x = A.x;
    return R;
}

LINE operator * (LINE A, LINE B){
    LINE R;
    R.b = A.b * B.b;
    R.a = A.a * B.b + B.a * A.b;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    return R;
}

LINE operator / (LINE A, LINE B){
    LINE R;
    R.b = A.b / B.b;
    R.a = A.a / B.b;
    R.x = A.x;
    return R;
}

LINE operator == (LINE A, LINE B){//assumes that only 1 solution.
    LINE C = A - B;
    C.x->i = -C.b/C.a;
    return C;
}

POLI operator == (POLI A, LINE B){
    POLI C = A - B;
    C.x->i = (-C.b + sqrtf(powf(C.b, 2) - (4*C.a*C.c)))/(2*C.a);
    return C;
}

ostream &operator << (ostream &output, const VAR &A) {
   if (A.i)
       output << "X = " << A.i;
    else
        throw "Error";
   return output;
}

int solve(POLI x){return (int)x.x->i;}
int solve(LINE x){return (int)x.x->i;}


#endif /* operatorShift_hpp */
