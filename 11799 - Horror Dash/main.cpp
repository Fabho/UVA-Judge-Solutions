/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int cases, runners, speed, clownSpeed;
    
    cin>>cases;

    for(int x=1; x<=cases; x++) {
        clownSpeed = -1;

        cin>>runners;

        for(int y=0; y<runners; y++) {
            
            cin>>speed;
            clownSpeed = max(clownSpeed, speed);
        }

        cout<<"Case "<<x<<": "<<clownSpeed<<endl;

    }

    return 0;
}