//
//  main.cpp
//  addition 2
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int k, l, m, n;
    cout << "Enter position first chessman : \n";
    cin >> k >> l;
    cout << "Enter position second chessman : \n";
    cin >> m >> n;
    if (abs(k - m) == abs(l - n)) {
        cout << "\nBishop threatens the specified chessman\n\n";
    } else {
        cout << "\nBishop doesn't threatens the specified chessman\n\n";
    }
    
    return 0;
}
