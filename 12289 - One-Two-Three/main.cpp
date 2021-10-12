/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    
    int cases, answer;
    string number;

    cin>>cases;

    while(cases--) {
        cin>>number;

        if(number.size() > 3) {    
            answer = 3;
        }
        else {
            if((number[0] == 'o' && number[1] == 'n') || (number[0] == 'o' && number[2] == 'e') || (number[1] == 'n' && number[2] == 'e'))
                answer = 1;
            else
                answer = 2; 
        }
        
        cout<<answer<<endl;
    }

    return 0;
}