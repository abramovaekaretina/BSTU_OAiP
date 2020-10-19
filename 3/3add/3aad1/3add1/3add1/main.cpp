//
//  main.cpp
//  3add1
//
//  Created by Ekaterina Abramova on 19.09.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char placeholder, probel;
    probel = ' ';
    
    cout << "\n    –first task–\n\n";
    
    cout << "Enter a plaplaceholdereholder : ";
    cin >> placeholder;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(8) << setfill(placeholder) << placeholder << endl;
    cout << setw(34) << setfill(probel) << probel;
    cout << setw(12) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(16) << setfill(placeholder) << placeholder << endl;
    cout << setw(31) << setfill(probel) << probel;
    cout << setw(18) << setfill(placeholder) << placeholder << endl;
    cout << setw(30) << setfill(probel) << probel;
    cout << setw(20) << setfill(placeholder) << placeholder << endl;
    cout << setw(31) << setfill(probel) << probel;
    cout << setw(18) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(16) << setfill(placeholder) << placeholder << endl;
    cout << setw(34) << setfill(probel) << probel;
    cout << setw(12) << setfill(placeholder) << placeholder << endl;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(8) << setfill(placeholder) << placeholder << endl;
    
    cout << "\n\n    –second task–\n\n";
    
    int firstNumber, secondNumber, thirdNumber;
    cout << "Enter first number : ";
    cin >> firstNumber;
    cout << "Enter second number : ";
    cin >> secondNumber;
    cout << "Enter third number : ";
    cin >> thirdNumber;

    float arithmeticMean, geometricMean;
    
    arithmeticMean = (abs(firstNumber) + abs(secondNumber) + abs(thirdNumber)) / 3;
    geometricMean = pow(abs(firstNumber) * abs(secondNumber) * abs(thirdNumber), 1/3.);

    cout << "\nArithmetic mean : " << arithmeticMean << endl << "Geometric mean : " << geometricMean << endl;
    
    return 0;
}
