//
//  main.cpp
//  5_while
//
//  Created by Ekaterina Abramova on 30.09.2020.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    double h, y, c = 2.1, r = 4e-4, m = 7, j = 0;
    
    while (j <= 1.7) {
        h = (10 * r - j) / (pow(c, 2) + exp(-m));
        y = (h * m - pow(j, 2)) + pow(c / 10, 2);
        cout << "h = " << h << "\ny = " << y << "\n\n";
        j += 0.1;
    }
    return 0;
}
