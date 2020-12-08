//
//  main.cpp
//  12add1
//
//  Created by Ekaterina Abramova on 23.11.2020.
//

//В заданном предложении указать слово, в котором доля гласных(A, E, I, O, U — строчных или прописных) максимальна.

#include <iostream>

using namespace std;

int counter(char temp[32], char letters[6], int length) {
    int flag = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 12; j++) {
            if (*(temp + i) == *(letters + j)) {
                flag++;
            }
        }
    }
    return flag;
}

int main() {
    char string[256], letters[12] = "AEIOUaeiou", buf[32], word[64];
    cout << "Enter string: ";
    cin >> string;
//    gets(string);
    char *pSent = &string[0];
    int lengthOfString = strlen(string);
    int* pLengthS = &lengthOfString;
    int tempMax = 0, max = 0, probel = 0;
    int lengthOfBuf = 0, lengthWord = 0;
    
    for (int i = 0; i <= *pLengthS; i++) {
        if (*(pSent + i) == ' ' || i == *pLengthS) {
            int tProbel = i;
            while (tProbel > probel - 1) {
                buf[tProbel] = string[tProbel];
                tProbel--;
                lengthOfBuf++;
            }
            tProbel = i;
            
            tempMax = counter(buf, letters, lengthOfBuf);
            if (tempMax > max) {
                max = tempMax;
                lengthWord = 0;
                while (tProbel > probel - 1) {
                    word[lengthWord] = string[tProbel];
                    tProbel--;
                    lengthWord++;
                }
            }
            lengthOfBuf = 0;
            probel = i;
        }
        
    }
    cout << "Word : ";
    lengthWord--;
    while (lengthWord > 0) {
        cout << word[lengthWord];
        lengthWord--;
    }
    cout << "\n\n";
    
    return 0;
}
