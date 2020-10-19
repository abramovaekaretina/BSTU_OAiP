//
//  main.cpp
//  7add2
//
//  Created by Ekaterina Abramova on 12.10.2020.
//

#include <iostream>

using namespace std;

int main() {
double a[] = { 8, -9, 8.21, -34, -1.245, 29.21, -3 }, index = 0;
    for (int i = 0; i < 6; i++) {
        if (a[i] < 0) {
            index = i + 1;
            break;
        }
    }
    
    cout << "Number first negative element - " << index << endl;
    return 0;
}
