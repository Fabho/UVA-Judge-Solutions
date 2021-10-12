/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    int cases, players, position, passes;

    cin>>cases;

    for(int i=1; i<= cases; i++) {
        cin>>players>>position>>passes;

        while(passes--) {
            position++;
            if(position > players)
                position = 1;
        }

        cout<<"Case "<<i<<": "<<position<<endl;
    }

    return 0;
}