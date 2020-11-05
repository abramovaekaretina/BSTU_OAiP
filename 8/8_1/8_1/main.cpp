//
//  main.cpp
//  8_1
//
//  Created by Ekaterina Abramova on 20.10.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //метод дихотомии
    
//    double e = 0.0001, a, b, x = 0;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    while (abs(a - b) > 2 * e) {
//        x = (a + b) / 2;
//        if (((pow(x, 3) + x - 3) * (pow(a, 3) + a - 3)) <= 0) {
//            b = x;
//        } else {
//            a = x;
//        }
//    }
//    cout << "x = " << x << endl;
    
    //метод касательных
    
    double e = 0.0001, a, b, x = 0, x1 = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if ((((pow(x + e, 3) + x + e - 3) - (2 * (pow(x, 3) + x - 3)) + (pow(x - e, 3) + x - e - 3)) / pow(e, 2)) * (pow(x, 3) + x - 3) > 0) {
        x1 = a;
    } else {
        x1 = b;
    }
    do {
        x = x1;
        x1 = x - ((pow(x, 3) + x - 3) / (((pow(x + e, 3) + x + e - 3) - (2 * (pow(x, 3) + x - 3)) + (pow(x - e, 3) + x - e - 3)) / pow(e, 2)));
    } while (abs(x1 - x) > e);
    cout << "x = " << x1 << endl;

    return 0;
}
