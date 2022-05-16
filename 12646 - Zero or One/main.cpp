/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    char winner;

    while(cin>>a>>b>>c) {
        if(a != b && a != c && b == c) {
            winner = 'A';
        }
        else if(b != a && b != c && c == a){
            winner = 'B';
        }
        else if(c != a && c != b && a == b){
            winner = 'C';
        }
        else
            winner = '*';

        cout<<winner<<'\n';
    }

    return 0;
}