/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>

using namespace std;
int main() {
     long long soldiersGroupOne, soldiersGroupTwo;

     while (cin>>soldiersGroupOne>>soldiersGroupTwo) {
         cout<< abs(soldiersGroupOne - soldiersGroupTwo)<<endl;
     }
    return 0;
}
