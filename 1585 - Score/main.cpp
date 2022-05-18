/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int cases;
    int score;
    int increment;
    string result;

    scanf("%d", &cases);

    while(cases--) {
        cin>>result;

        score = 0;
        increment = 1;

        for(int i=0; i<result.length(); i++) {
            if(result[i] == 'O')
                score += increment++;
            else
                increment = 1;
        }

        printf("%d\n", score);
    }

    return 0;
}
