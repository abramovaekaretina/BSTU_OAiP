//
//  main.cpp
//  6add4
//
//  Created by Ekaterina Abramova on 11.10.2020.
//

#include <iostream>

using namespace std;

//Составить алгоритм,  определяющий,  сколько существует способов набора одного рубля при помощи монет досто-инством 50коп., 20коп., 5коп. и 2коп

int main(int argc, const char * argv[]) {
    
    int counter = 0;
    
    for (int a = 0; a <= 2; a++) {
        for (int b = 0; b <= 5; b++) {
            for (int c = 0; c <= 20; c++) {
                for (int d = 0; d <= 50; d++) {
                    if (50 * a + 20 * b + 5 * c + 2 * d == 100) {
                        counter++;
                    }
                }
            }
        }
    }
    
    cout << "Number of way is " << counter << endl << endl;
    return 0;
}
