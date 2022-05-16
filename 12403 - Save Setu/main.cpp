/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int amount = 0, totalCommands, donation;
    string command;

    scanf("%d", &totalCommands);

    while(totalCommands--) {
        cin>>command;

        if(command == "report")
            printf("%d\n", amount);
        else {
            scanf("%d", &donation);
            amount+=donation;
        }
    }
    return 0;
}
