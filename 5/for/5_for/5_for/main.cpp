//
//  main.cpp
//  5_for
//
//  Created by Ekaterina Abramova on 30.09.2020.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    double h, y, c = 2.1, r = 4e-4, m = 7, j;
    
    for (int i = 0; i < 4; i++) {
        cout << "Enter j = ";
        cin >> j;
        h = (10 * r - j) / (pow(c, 2) + exp(-m));
        y = (h * m - pow(j, 2)) + pow(c / 10, 2);
        cout << "h = " << h << "\ny = " << y << "\n\n";
    }
    return 0;
}

