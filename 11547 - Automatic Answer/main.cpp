/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    
    int cases, number;
    
    cin>>cases;

    while(cases--) {
        cin>>number;

        number = (((number * 567 / 9) + 7492) * 235 / 47) - 498;
        
        if(number < 0) number *= (-1);

        number /= 10;

        cout<<number % 10<<endl;
    }

    return 0;
}