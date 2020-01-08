//
//  Demo.cpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 29/12/2019.
//  Copyright © 2019 Adam Lev-Ari. All rights reserved.
//


#include <iostream>
#include "operatorShift.h"

int main(){
    VAR x;
    
    solve((2*x^2) - 4*x + 3 == 9);
    cout << x << endl;     // X = 3  -- OK
    
    solve((x^2) + 6*x == -9);
    cout << x << endl;     // X = -nan -- NOT OK --- should be -3
    
    solve(2*x-4 == 10);
    cout << x << endl;     // X = 7 -- OK

    solve((x^2) == 16);
    cout << x << endl;     // X = 1.40312 -- NOT OK -- should be 4
    

    /*
    solve((x^2) == 16);
    cout << x << endl;
    
    solve((2*x^2) - 4*x + 3 == 9);
    cout << x << endl;
    
    solve((x^2) + 6*x == -9);
    cout << x << endl;
    
    solve(2*x-4 == 10);
    cout << x << endl;
    */
    
    return 0;
}
