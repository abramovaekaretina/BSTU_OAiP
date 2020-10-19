//
//  main.cpp
//  3add2
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
    cout << setw(34) << setfill(probel) << probel;
    cout << setw(12) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(16) << setfill(placeholder) << placeholder << endl;
    cout << setw(30) << setfill(probel) << probel;
    cout << setw(20) << setfill(placeholder) << placeholder << endl;
    cout << setw(28) << setfill(probel) << probel;
    cout << setw(24) << setfill(placeholder) << placeholder << endl;
    
    cout << "\n\n    –second task–\n\n";
    
    int circumference;
    cout << "Enter circumference : ";
    cin >> circumference;

    double radius, areaOfCircle;
    const double PI = 3.141592653589793;
    
    radius = circumference / (2 * PI);
    
    areaOfCircle = pow(radius, 2) * PI;

    cout << "\nArea of a circle with radius " << radius << " is : " << areaOfCircle << endl << endl;
    
    return 0;
}
