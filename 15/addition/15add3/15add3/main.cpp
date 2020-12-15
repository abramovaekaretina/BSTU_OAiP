//
//  main.cpp
//  15
//
//  Created by Ekaterina Abramova on 13.12.2020.
//

#include <iostream>

using namespace std;

double expression(double x);
double derived(double x);
double trapezoidMethod(double a, double b, double n, double (*function)(double x));
double parabolaMethod(double a, double b, double n, double(*function)(double x));
double dichotomyMethod(double a, double b, double eps, double(*function)(double x));
double tangentMethod(double a, double b, double eps, double(*function)(double x), double(*derivedFunction)(double x));

int main(int argc, const char * argv[]) {

    double a = 2, b = 3, n = 200;
    double z = 0;
    double eps = 10e-3L;
    int k;
    do {
        z = 0;
        cout << "Enter what method we will consider the integral" << endl;
        cout << "1 - trapezoidal method" << endl;
        cout << "2 - by the parabola method" << endl;
        cout << "3 - finding the root by the dichotomy method" << endl;
        cout << "4 - finding the root by the tangent method" << endl;
        cin >> k;
        switch (k) {
            case 1:
                cout << endl << trapezoidMethod(a, b, n, expression) << "\n\n";
                break;
            case 2:
                cout << endl << parabolaMethod(a, b, n, expression) << "\n\n";
                break;
            case 3:
                cout << endl << dichotomyMethod(a, b, eps, expression) << "\n\n";
                break;
            case 4:
                cout << endl << tangentMethod(a, b, eps, expression, derived) << "\n\n";
                break;
            case 5:
                break;
        }
    } while (k != 5);
}

double expression(double x) {
    return (sin(x) + 1);
}

double derived(double x) {
    return cos(x);
}

double trapezoidMethod(double a, double b, double n, double (*function)(double x)) {
    double result = 0;
    double h = (b - a) / n;
    double x = a;
    while (x < b - h) {
        result += h * (function(x) + function(x + h)) / 2;
        x += h;
    }
    return result;
}

double parabolaMethod(double a, double b, double n, double(*function)(double x)) {
    double result;
    n *= 2;
    double h = (b - a) / n;
    double x = a + h;
    double s1 = 0, s2 = 0, i = 1;
    while (i < n) {
        s1 += function(x);
        x += h;
        s2 += function(x);
        x += h;
        i += 2;
    }
    result = h / 3 * (function(a) + 4 * function(a + h) + 4 * s1 + 2 * s2 + function(b));
    return result;
}

double dichotomyMethod(double a, double b, double eps, double(*function)(double x)) {
    double x, y, y1;
    int n = 0;
    do {
        x = a;
        y = function(x); n++;
        x = (a + b) / 2;
        y1 = function(x); n++;
        if ((y * y1) <= 0)
            b = x;
        else a = x;
    } while (abs(b - a) > eps);
    return x;
}

double tangentMethod(double a, double b, double eps, double(*function)(double x), double(*derivedFunction)(double x)) {
    double t;
    int n = 0;
    do {
        t = function(b) / derivedFunction(b);
        b -= t;
        n += 2;
    } while (abs(t) > eps);
    return b;
}
