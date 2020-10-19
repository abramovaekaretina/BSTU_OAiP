//
//  main.cpp
//  2
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>

int main() {
//    float t, k = 4, a = 8.1, x = 2e-4, u;
//    t = 2 * k / a + log(2 + x);
//    u = sqrt(k - 1) / (t + 1);
//    std::cout << "t = " << t << ", u = " << u << "\n\n";
//
    //second option
//
//    float p, t = 6, y = -1.2, x = 0.4e6, q;
//    p = 2.6 * t + cos(y / (3 * x + y));
//    q = sin(t) / cos(t);
//    std::cout << "p = " << p << ", q = " << q << "\n\n";
////
//
    //additional tasks
    //first
//

//    float y, m = 6, x = 1.4, z = 0.05e-5, w;
//    y = sqrt(1 + x) - cos(2 / m);
//    w = 0.6 * z - 2 * exp(-2 * y * m);
//    std::cout << "y = " << y << ", w = " << w << "\n\n";
    
    //second
    
//    float y, m = 3, n = 3, z = 1.7, a = 4e-8, s;
//    y = (z + log(z)) / (exp(-3) + sqrt(a));
//    s = (1 + m * n) / log(1 + z);
//    std::cout << "y = " << y << ", s = " << s << "\n\n";
    
    //third
    
    float t, c = 9, a = 1.5, d = 0.5e-8, y;
    t = d * c + a * sqrt(c - 1);
    y = 0.5 * t / d * exp(a);
    std::cout << "t = " << t << ", y = " << y << "\n\n";

    return 0;
}


    
