//
//  main.cpp
//  12add2
//
//  Created by Ekaterina Abramova on 23.11.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    char string[256], buf[64];
    int positions[128];
    int lengthOfString = 0, lengthOfPositions = 0;
    cout << "Enter string: ";
//    gets(Sentence);
    cin >> string;
    lengthOfString = strlen(string);
    int *pLengthS = &lengthOfString;
    for (int i = 0; i < *pLengthS; i++) {
        if (*(string + i) == ' ') {
            positions[lengthOfPositions] = i;
            lengthOfPositions++;
        }
        positions[lengthOfPositions + 1] = *pLengthS;
    }

    for (int i = 0; i < lengthOfPositions; i++) {
        int start = *(positions+i), end = *(positions + i + 1);
        while (start != end) {
            buf[i] = *(positions + i);
        }
        
    }
    while (lengthOfString > 0) {
        cout << string[lengthOfString];
        lengthOfString--;
    }
    cout << "\n\n";

    return 0;
}
