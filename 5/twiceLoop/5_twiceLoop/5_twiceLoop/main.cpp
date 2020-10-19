//
//  main.cpp
//  5_twiceLoop
//
//  Created by Ekaterina Abramova on 30.09.2020.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float h, y, c = 2.1, r = 4e-4, m = 1, j = 0;
    for (int i = 0; i < 4; i++) {
        cout << "\nEnter j = ";
        cin >> j;
        cout << "If j = " << j << endl;
            while (m <= 2) {
              h = (10 * r - j) / (pow(c, 2) + exp(-m));
              y = (h * m - pow(j, 2)) + pow(c / 10, 2);
              cout << "h = " << h << ",  " << "y = " << y << ";   " << "if m = " << m << endl;
              m = m + 0.5;
            }
            m = 1;
    }
    return 0;
}
