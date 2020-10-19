//
//  main.cpp
//  3add3
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
    cout << setw(10) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(18) << setfill(placeholder) << placeholder << endl;
    cout << setw(30) << setfill(probel) << probel;
    cout << setw(22) << setfill(placeholder) << placeholder << endl;
    cout << setw(29) << setfill(probel) << probel;
    cout << setw(24) << setfill(placeholder) << placeholder << endl;
    cout << setw(30) << setfill(probel) << probel;
    cout << setw(22) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(18) << setfill(placeholder) << placeholder << endl;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(10) << setfill(placeholder) << placeholder << endl;
    
    cout << "\n\n    –second task–\n\n";
    
    int numberOfPupil, numberOfApple;
    cout << "Enter number of apple : ";
    cin >> numberOfApple;
    cout << "Enter number of pupil : ";
    cin >> numberOfPupil;
    
    int applesForEach;
    
    applesForEach = numberOfApple / numberOfPupil;

    cout << endl << applesForEach << " apple will go to every pupil\n\n";
    
    return 0;
}
