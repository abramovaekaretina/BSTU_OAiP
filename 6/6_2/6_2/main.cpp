//
//  main.cpp
//  6_2
//
//  Created by Ekaterina Abramova on 08.10.2020.
//

#include <iostream>

using namespace std;

int main() {
    double a = 1.774, m = 5, x = 3, y = 0, z = 0;
    
    while (x <= 5.1) {
        y = a + pow(m, 2) * pow(x, 2) / (a + x) * m;
        
        if (abs(y) < 1) {
            z = y + 1;
        } else if (abs(y) >= 1) {
            z = pow(sin(y), 2);
        }
        
        cout << "y = " << y << ",  z = " << z << "     if x = " << x << "\n\n";
        x += 0.2;
    }
    
    return 0;
}
