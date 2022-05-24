/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int getNumericValue(string name) {

    int result = 0;
    char character;
    int charValue;

    for(int i=0; i<name.size(); i++) {

        character = name[i];

        if(isalpha(character)) {
            if(isupper(name[i]))
                character = tolower(character);

            charValue = (int) character - 96;
            result += charValue;
        }
    }

    return result;
}

int getUnit(int val) {

    int result = 0;

    while(val > 0) {
        result = result + (val % 10);
        val /= 10;
    }

    if(result >= 10)
        return getUnit(result);
    else
        return result;
}

int main() {

    string nameOne, nameTwo;
    int strValueOne, strValueTwo;
    double answer;

    while(getline(cin, nameOne)) {
        getline(cin, nameTwo);

        strValueOne = getNumericValue(nameOne);
        strValueTwo = getNumericValue(nameTwo);

        strValueOne = getUnit(strValueOne);
        strValueTwo = getUnit(strValueTwo);

        if(strValueOne > strValueTwo)
            answer = ((double)strValueTwo / (double)strValueOne) * 100;
        else
            answer = ((double)strValueOne / (double)strValueTwo) * 100;

        printf("%.2f %%\n", answer);
    }

    return 0;
}
