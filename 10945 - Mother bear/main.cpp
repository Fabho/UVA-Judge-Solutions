/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

string removeWhiteSpace(string str) {
    string result = "";

    for(int i=0; i<str.size(); i++) {
        if(isalpha(str[i]))
            result += tolower(str[i]);
    }

    return result;
}

int main() {

    string input, reverseInput;

    while(getline(cin, input)) {
        if(input == "DONE")
            break;

        input = removeWhiteSpace(input);
        reverseInput = input;
        reverse(reverseInput.begin(), reverseInput.end());

        if(input == reverseInput)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }

    return 0;
}
