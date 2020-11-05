//
//  main.cpp
//  8add3
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

#include <iostream>

using namespace std;

int main() {
//    метод трапеций
    
//    double a = 1, b = 3, n = 200, h;
//    h = (b - a) / n;
//    double x = a, s = 0;
//    while (x < (b - h)) {
//        s += 0.5 * h * (sin(x) + 1) + (sin(x + h) + 1);
//        x += h;
//    }
//    cout << "s = " << s << endl;
    
//    метод парабол
    
//    double a = 1, b = 3, n = 200, h;
//    h = (b - a) / (2 * n);
//    double x = a + 2 * h, s1 = 0, s2 = 0, i = 1, s;
//    while (i < n) {
//        s2 += sin(x) + 1;
//        x += h;
//        s1 += sin(x) + 1;
//        x += h;
//        i++;
//    }
//    s = (h / 3.) * (sin(x) + 1 + 4 * (sin(x + h) + 1) + 4 * s1 + 2 * s2 + sin(b) + 1);
//    cout << "s = " << s << endl;
    
    
//    второе задание
//    метод касательной
    
//    double e = 0.0001, a, b, x = 0, x1 = 0;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    if ((((sin(x + e) + pow(x + e, 3)) - (2 * (sin(x) + pow(x, 3))) + (sin(x - e) + pow(x - e, 3))) / pow(e, 2)) * (sin(x - e) + pow(x - e, 3)) > 0) {
//        x1 = a;
//    } else {
//        x1 = b;
//    }
//    do {
//        x = x1;
//        x1 = x - ((sin(x) + pow(x, 3)) / (((sin(x + e) + pow(x + e, 3)) - (2 * (sin(x) + pow(x, 3))) + (sin(x - e) + pow(x - e, 3))) / pow(e, 2)));
//    } while (abs(x1 - x) > e);
//    cout << "x = " << x1 << endl;
    
//    метод дихотомии
    
    double e = 0.0001, a, b, x = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    while (abs(a - b) > 2 * e) {
        x = (a + b) / 2;
        if (((sin(x) + pow(x, 3)) * (sin(a) + pow(a, 3))) <= 0) {
            b = x;
        } else {
            a = x;
        }
    }
    cout << "x = " << x << endl;
    
    return 0;
}

