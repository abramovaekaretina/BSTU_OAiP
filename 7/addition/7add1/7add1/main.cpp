//
//  main.cpp
//  7add1
//
//  Created by Ekaterina Abramova on 12.10.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double result = 0;
    for (int i = 0; i < 777; i++) {
        if (i % 2 == 0) {
            result += i;
        }
    }
    
    cout << "Sum even number is " << result << endl << endl;
    return 0;
}
