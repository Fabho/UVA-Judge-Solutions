/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int sumDigits(int number) {
    int result = 0;

    while(number > 0) {
        result += number % 10;
        number /= 10;
    }

    if(result >= 10)
        return sumDigits(result);
    else
       return result;
}

int main() {
    
    int number;
    
    while(cin>>number) {
        
        if(!number) break;

        cout<<sumDigits(number)<<endl;
    }

    return 0;
}