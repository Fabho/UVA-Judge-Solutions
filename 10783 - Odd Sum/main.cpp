/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int cases, a, b, result;

    scanf("%d", &cases);

    for(int i=1; i<=cases; i++) {
        scanf("%d", &a);
        scanf("%d", &b);

        result = 0;

        for(int j=a; j<=b; j++) {
            if(j % 2 != 0)
                result +=j;
        }

        printf("Case %d: %d\n", i, result);
    }

    return 0;
}