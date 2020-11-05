//
//  main.cpp
//  8add2
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
//    метод трапеций
    
//    double a = 1, b = 3, n = 200, h;
//    h = (b - a) / n;
//    double x = a, s = 0;
//    while (x < (b - h)) {
//        s += 0.5 * h * (exp(x) + 2) + (exp(x + h) + 2);
//        x += h;
//    }
//    cout << "s = " << s << endl;
    
//    метод парабол
    
//    double a = 1, b = 3, n = 200, h;
//    h = (b - a) / (2 * n);
//    double x = a + 2 * h, s1 = 0, s2 = 0, i = 1, s;
//    while (i < n) {
//        s2 += exp(x) + 2;
//        x += h;
//        s1 += exp(x) + 2;
//        x += h;
//        i++;
//    }
//    s = (h / 3.) * (exp(a) + 2 + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + exp(b) + 2);
//    cout << "s = " << s << endl;
    
    
//    второе задание
//    метод касательной
//    
//    double e = 0.0001, a, b, x = 0, x1 = 0;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    if ((((exp(x + e) + x + e - 4) - (2 * (exp(x) + x - 4)) + (exp(x - e) + x - e - 4)) / pow(e, 2)) * (exp(x) + x - 4) > 0) {
//        x1 = a;
//    } else {
//        x1 = b;
//    }
//    do {
//        x = x1;
//        x1 = x - ((exp(x) + x - 4) / (((exp(x + e) + x + e - 4) - (2 * (exp(x) + x - 4)) + (exp(x - e) + x - e - 4)) / pow(e, 2)));
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
        if (((exp(x) + x - 4) * (exp(a) + a - 4)) <= 0) {
            b = x;
        } else {
            a = x;
        }
    }
    cout << "x = " << x << endl;
    
    return 0;
}
