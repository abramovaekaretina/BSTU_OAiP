//
//  main.cpp
//  6_1
//
//  Created by Ekaterina Abramova on 08.10.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "All three-digit numbers in ascending order, \nin decimal notation of which there are no \nidentical digits :\n\n";
    
    for (int i = 100; i < 999; i++) {
        if ((i / 111 == i % 10) && (i % 111 == 0)) {
            continue;
        } else {
            cout << i << "  ";
        }
    }
    
    cout << endl << endl;
    
    return 0;
}
