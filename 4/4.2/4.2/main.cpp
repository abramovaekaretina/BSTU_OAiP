//
//  main.cpp
//  5
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    float m, n, p;
    int counter = 0;
    cout << "Enter m = ";
    cin >> m;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter p = ";
    cin >> p;
    
    if (m < 0) counter++;
    if (n < 0) counter++;
    if (p < 0) counter++;
    
    cout << "\nQuantity of negative numbers : " << counter << "\n\n";
    
    return 0;
}

