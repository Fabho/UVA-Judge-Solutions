/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    
    int cases, l, w, h;
    bool isGood;

    cin>>cases;

    for(int i=1; i<=cases; i++) {
        isGood = false;
        
        cin>>l>>w>>h;

        if(l <= 20 && w <= 20 && h <= 20)
            isGood = true;

        cout<<"Case "<<i<<": ";
        isGood ? cout<<"good\n" : cout<<"bad\n"; 
    }

    return 0;
}