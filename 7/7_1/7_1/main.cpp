//
//  main.cpp
//  7_1
//
//  Created by Ekaterina Abramova on 12.10.2020.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Option 1";
    double d1 = 12.5e-4, h1 = d1;
    double a1[] = { 0.8, 4, -7, 2, 0.91 };
    for (int i = 0; i < 5; i++) {
        h1 += pow(a1[i], 2);
    }
    cout << "\nh = " << h1 << endl;
    
    
    cout << "\nOption 2";
    double x2 = 1, c2 = -0.045, g2 = 1, b2[] = { 0.9, 0.5, -2, -0.1 };
    for (int i = 0; i < 4; i++) {
        x2 *= pow((b2[i] + 1), 2);
        g2 = c2 * x2;
    }
    cout << "\ng = " << g2 << endl;
    
    
    cout << "\nOption 3";
    double z3 = 0, sum3 = 0, x3[] = { -2, 6, 1.1, 2.7, 4 };
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            z3 = 8 * x3[i];
        }
        sum3 += pow(x3[i] - 2, 2);
    }
    z3 += sum3;
    cout << "\nz = " << z3 << endl;

    
    cout << "\nOption 4\n";
    double g4, sum4 = 0, f4, k4 = 6, a4[] = { 2.3, 7, -2, -4, 9 };
    for (int i = 1; i <= 5; i++) {
        sum4 += (a4[i] / i);
    }
    while (k4 <= 7) {
        f4 = k4;
        g4 = f4 / sum4;
        cout << "g = " << g4 << endl;
        k4 += 0.2;
    }
    
    
    cout << "\nOption 5\n";
    double a5 = 1.5, b5 = -4.15, v5[] = { 1, 1.5, -4, -1.9, 3 }, w5 = 0;
    for (int i = 0; i < 5; i++) {
        if (v5[i] > 0) {
            w5 = a5 + v5[i];
            cout << "w = " << w5 << endl;
        } else {
            w5 = b5 / v5[i];
            cout << "w = " << w5 << endl;
        }
    }
    
    
    cout << "\nOption 6";
    double x6[] = { 2.7, -5, 4, 3, 5, -7 }, y6 = 0, a6 = 0, b6 = 1;
    for (int i = 0; i <= 6; i++) {
        y6 += x6[i];
        if (x6[i] > 0){
            a6 += x6[i];
        } else {b6 *= x6[i];
        }
    }
    cout << "\na = " << a6 << endl;
    cout << "b = " << b6 << endl;


    cout << "\nOption 7";
    double a7[] = { 0.5, 2, 2.5, 1, 0, 8 },
    b7[] = { 2.3, 4, 0.5, 2, 3, 9 }, c7, z7, d7 = 0;
    for (int i = 1; i <= 6; i++) {
        c7 = sqrt(a7[i] + b7[i]);
        z7 = c7 / i;
        d7 += z7;
    }
    cout << "\nd = " << d7 << endl;

    
    cout << "\nOption 8";
    double a8[] = { 3, 12, -4, 6.2, 3, 0.4 }, b8[] = { 19, 1, -24, 4.2, 8 },
    c8 = 0.7, d8, sumB = 0, sumA = 0;
    for (int i = 0; i <= 6; i++) {
        sumA += a8[i];
    }
    for (int j = 0; j <= 5; j++) {
        sumB += pow((b8[j] - 1), 2);
    }
    d8 = sumA - c8 * sumB;
    cout << "\nd = " << d8 << endl;
    
    
    cout << "\nOption 9\n";
    double x9[] = { 0.7, 6, -7, 9, -4.1 }, d9 = 5.5e-4, a9 = 1;
    for (int i = 0; i < 5; i++) {
        a9 = (exp(-x9[i]) * sin(x9[i])) / (sqrt(d9 + abs(cos(x9[i]))));
        cout << "d = " << a9 << endl;
    }
    
    
    cout << "\nOption 10";
    double x10[] = { 3, -2, 0.7, -1, -2.7 },
    y10[] = { 1, 5, -1.2, 6, 9, -4 }, q10 = 1;
    for (int i = 1; i <= 6; i++) {
        q10 = x10[i] * y10[i];
    }
    cout << "\nq = " << q10 << endl;
    
    
    cout << "\nOption 11";
    double a11 = 5.45, y11[] = { 2.1, 7.7, -4, 5, 9 }, q11 = 4, s11 = 2 * a11;
    for (int i = 0; i < 5; i++) {
        q11 *= y11[i] / (pow(i + 1, 2) + 1);
    }
    s11 += q11 * sin(a11);
    cout << "\ns = " << s11 << "\nq = " << q11 << endl;
    
    
    cout << "\nOption 12";
    double y12 = 0, z12;
    double x[] = { 1, 2.7, 4.7, 6, 10 };
    z12 = x[0];
    for (int i = 0; i < 5; i++) {
        y12 += pow(x[i], 2);
        if (x[i] > z12) {
            z12 = x[i];
        }
    }
    y12 *= z12;
    cout << "\nz = " << z12 << "\ny = " << y12 << endl;
    
    
    cout << "\nOption 13";
    double y13[5] = { 3, -2, 0.9, 0.5, 1 }, p13 = 10, q13, x13 = 1;
    for (int i = 0; i < 5; i++) {
        if (y13[i] < p13) {
            p13 = y13[i];
        }
    x13 *= (y13[i] - 5);
    }

    q13 = x13 + p13;
    cout << "\nq = " << q13 << endl;

    
    cout << "\nOption 14";
    double y14[] = { 4, -6, 3, -3, 9, 5 }, c14 = 10.1, x14 = 0, z14;
    for (int i = 0; i <= 6; i++) {
        x14 += y14[i];
        i++;
    }
    if (x14 > c14) {
        z14 = sin(c14);
    } else {
        z14 = cos(c14);
    }
    cout << "\nz = " << z14 << endl;
    
    
    cout << "\nOption 15";
    double t15 = 0.45, q15 = t15, x15[] = { 1.1, 6.2, 3, -4, 6.1 };
    for (int i = 0; i < 5; i++) {
        q15 += (x15[i] + 1) / x15[i];
    }
    cout << "\nq = " << q15 << endl;

    
    cout << "\nOption 16";
    double x16[] = { 8, -2.3, -8.4, 5.1, 9 }, t16 = 0.5, y16 = 1;
    while (t16 < 3) {
        if (t16 < 2) {
            for (int i = 0; i < 5; i++) {
                y16 += pow(x16[i], 2);
            }
            y16 += t16;
        } else {
            y16 = cos(pow(t16, 2));
        }
        t16 += 0.5;
    }
    cout << "\ny = " << y16 << endl << endl;

    return 0;
}
