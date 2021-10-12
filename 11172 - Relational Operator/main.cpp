/*
Fabho
Fabian Calsina Chuquimia
2021
*/
#include <iostream>
using namespace std;

int main() {
    int cases, numberOne, numberTwo;
    char answer;

    cin>>cases;

    while(cases--) {
        cin>>numberOne>>numberTwo;

        if(numberOne > numberTwo)
            answer = '>';
        else if(numberOne == numberTwo)
            answer = '=';
        else
            answer = '<';
        
        cout<<answer<<endl;
    }

    return 0;
}