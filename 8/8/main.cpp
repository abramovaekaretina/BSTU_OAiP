//
//  main.cpp
//  8
//
//  Created by Ekaterina Abramova on 19.10.2020.
//

#include <iostream>

using namespace std;

int main() {
    
    //метод трапеции
    
//    double a = 1, b = 3, n = 200, h;
//    h = (b - a) / n;
//    double x = a, s = 0;
//    while (x < (b - h)) {
//        s += 0.5 * h * ((pow(x, 3) - 3) + (pow(x + h, 3) - 3));
//        x += h;
//    }
//    cout << "s = " << s << endl;
    
    //метод парабол
    
    double a = 1, b = 3, n = 200, h;
    h = (b - a) / (2 * n);
    double x = a + 2 * h, s1 = 0, s2 = 0, i = 1, s;
    while (i < n) {
        s2 += pow(x, 3) - 3;
        x += h;
        s1 += pow(x, 3) - 3;
        x += h;
        i++;
    }
    s = (h / 3.) * (pow(a, 3) - 3 + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + pow(b, 3) - 3);
    cout << "s = " << s << endl;

    return 0;
}
